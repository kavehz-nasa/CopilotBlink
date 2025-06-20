{-# LANGUAGE RebindableSyntax #-}
module Main where

import Language.Copilot
import Copilot.Compile.C99

import Prelude hiding ((++), not)

pattern :: Stream Bool
pattern = [True, False, True, True, True, False, False, False] ++ pattern

spec :: Spec
spec = do
    trigger "rotateLeft" (pattern) [arg pattern]
    trigger "rotateRight" (not pattern) [arg pattern]

main = reify spec >>= compileWith settings "controlServo"

settings = mkDefaultCSettings {cSettingsStepFunctionName = "myStep"}