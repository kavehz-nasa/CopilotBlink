{-# LANGUAGE RebindableSyntax #-}
module Main where

import Language.Copilot
import Copilot.Compile.C99

import Prelude hiding ((++), not)

alt :: Stream Bool
alt = [False, False, False, True] ++ alt

spec :: Spec
spec = do
    trigger "turnOn" (alt) [arg alt]
    trigger "turnOff" (not alt) [arg alt]

main = reify spec >>= compileWith settings "blink"

settings = mkDefaultCSettings {cSettingsStepFunctionName = "forFun"}