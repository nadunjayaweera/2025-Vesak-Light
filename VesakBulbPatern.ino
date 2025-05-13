const int relayPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int numRelays = 8;

void setup() {
  for (int i = 0; i < numRelays; i++) {
    pinMode(relayPins[i], OUTPUT);
    digitalWrite(relayPins[i], HIGH); // All OFF initially
  }
}

void loop() {
  patternWave();
  patternBlinkAll();
  patternChase();
  patternSparkle();
  patternReverseChase();
  patternAlternate();
  patternBounce();
  patternFillDrain();
  patternSnake();
  patternRandomFlashGroup();
  patternEvenOddFlicker();
  patternInsideOut();
  patternOutsideIn();
  patternRollingWave();
  patternBlinkCenter();
  patternSeqOnOff();
  patternRipple();
  patternAllOnStepOff();
  patternPingPongTrail();
  patternDoubleWave();
  patternFillDrainOpposite();
  patternHalfHalf();
  patternScanSparkle();
  patternFlickerAll();
  patternChaseFade();
  patternOuterBounce();
  patternLightningBurst();
  patternSlowWave();
  patternReverseSparkle();
  patternSpiralIn();
  patternShimmer();
  patternPairPulse();
  patternStepInOut();
  patternQuickStep();
  patternBounceFlicker();
  patternSnakeReverse();
  patternBurstFill();
  patternSpiralOutBlink();
  patternEdgeSparkle();
  patternCrossRipple();
  patternMirrorChase();
  patternMidFlicker();
  patternPingWave();
  patternComboFlash();
  patternCascadeInward();
  patternAllOnShimmer();
  patternHalfFillDrain();
  patternSparkleRain();
  patternCountdown();
  patternFinalBurst();
  patternPairOuterIn();
  patternRandomChase();
  patternCrossTwinkle();
  patternSweepLeft();
  patternRandomOff();
  patternRollIn();
  patternPulseAll();
  patternFillOutward();
  patternStrobe();
  patternSnakeEdgePulse();
  patternTriplets();
  patternEdgeFlicker();
  patternWaveReturn();
  patternSnakePause();
  patternMidWaveBounce();
  patternGroupToggle();
  patternInOutShimmer();
  patternLoopSparkle();
  patternSymJump();
  patternStarPulse();
  patternBlinkStorm();
  patternRapidSweepLeft();
  patternOuterRipple();
  patternRaceOut();
  patternSlowPulse();
  patternFlickerChase();
  patternEvenOddPunch();
  patternCrossFill();
  patternRingWave();
  patternGrandFinale();
  patternZigZagLR();
  patternCenterOff();
  patternCornerPulse();
  patternStepOutward();
  patternEdgeWalkInward();
  patternRandomRipple();
  patternOneOffLadder();
  patternQuickOddEven();
  patternGroupStep();
  patternGrandWaveCombo();
  patternInsideOutPop();
  patternCornerLoop();
  patternMirrorFlow();
  patternAltThrob();
  patternTripleFlashBounce();
  patternAllBlinkSlow();
  patternLadderForward();
  patternLadderReverse();
  patternBounceOuterIn();
  patternSparkleTrain();
  patternRollingPulse();
  patternSweepHold();
  patternSnakeWiggle();
  patternPulseChunks();
  patternCenterToggle();
  patternAltWaves();
  patternFastSparkFill();
  patternReverseStepFlash();
  patternInOutIn();
  patternBurstExplosion();
  patternSlideCenterIn();
  patternSlideCenterOut();
  patternCascadeFade();
  patternShuffleSparkle();
  patternFastInOutPulse();
  patternRandomParty();
  patternDoubleChase();
  patternReverseRun();
  patternExplosionSpark();
  patternHeartbeatFinale();
  patternSweepBlinkCombo();
  patternGroupSparkFlash();
  patternWaveDelayStep();
  patternStaggerFlash();
  patternRandomDoubleSpark();
  patternCrossBounce();
  patternOneByOneSpark();
  patternFinalePulse();
  patternAllOnOneOff();
  patternChaseHold();
  patternSpiralCombo();
  patternPairFlick();
  patternBounceShimmer();
  patternRapidFillDrain();
  patternCenterHoldEdgeDance();
  patternPulseFlicker();
  patternWaveFromEnds();
  patternRippleBlink();
  patternSpeedTrain();
  patternExplode();
  patternDoublePulse();
  patternDiagonalFlash();
  patternAltShimmer();
  patternFlashCenterOut();
  patternTopBottomAlternate();
  patternPingSweepBounce();
  patternRandomPairs();
  patternHeartbeat();
  patternSweepPause();
  patternTwinInward();
  
}

// Pattern 1: Wave (left to right, one by one)
void patternWave() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
  }
}



// Pattern 2: All blink ON and OFF
void patternBlinkAll() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(400);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(400);
  }
}

// Pattern 3: Chase forward
void patternChase() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < numRelays; j++) {
      digitalWrite(relayPins[j], LOW);
      delay(100);
      digitalWrite(relayPins[j], HIGH);
    }
  }
}

// Pattern 4: Sparkle random
void patternSparkle() {
  for (int i = 0; i < 20; i++) {
    int randPin = random(0, numRelays);
    digitalWrite(relayPins[randPin], LOW);
    delay(80);
    digitalWrite(relayPins[randPin], HIGH);
    delay(80);
  }
}

// Pattern 5: Reverse chase
void patternReverseChase() {
  for (int i = 0; i < 3; i++) {
    for (int j = numRelays - 1; j >= 0; j--) {
      digitalWrite(relayPins[j], LOW);
      delay(120);
      digitalWrite(relayPins[j], HIGH);
    }
  }
}

// Pattern 6: Alternate evens and odds
void patternAlternate() {
  // ON evens
  for (int i = 0; i < numRelays; i += 2) digitalWrite(relayPins[i], LOW);
  delay(500);
  for (int i = 0; i < numRelays; i += 2) digitalWrite(relayPins[i], HIGH);
  
  // ON odds
  for (int i = 1; i < numRelays; i += 2) digitalWrite(relayPins[i], LOW);
  delay(500);
  for (int i = 1; i < numRelays; i += 2) digitalWrite(relayPins[i], HIGH);
}

// Pattern 7: Bounce back and forth
void patternBounce() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
  for (int i = numRelays - 2; i > 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 8: Fill and drain
void patternFillDrain() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(500);
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);
    delay(100);
  }
}

// Pattern 9: Snake overlap
void patternSnake() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    if (i > 2) digitalWrite(relayPins[i - 3], HIGH);
    delay(150);
  }
  for (int i = numRelays - 3; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 10: Random group flash
void patternRandomFlashGroup() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 3; j++) {
      int pin = random(numRelays);
      digitalWrite(relayPins[pin], LOW);
    }
    delay(200);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 11: Even-odd flicker
void patternEvenOddFlicker() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(300);
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(300);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 12: Inside out
void patternInsideOut() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - i - 1], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(200);
    digitalWrite(relayPins[mid - i - 1], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 13: Outside in
void patternOutsideIn() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(200);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 14: Rolling wave
void patternRollingWave() {
  for (int repeat = 0; repeat < 4; repeat++) {
    for (int i = 0; i < numRelays; i++) {
      digitalWrite(relayPins[i], LOW);
      delay(60);
    }
    for (int i = 0; i < numRelays; i++) {
      digitalWrite(relayPins[i], HIGH);
      delay(60);
    }
  }
}

// Pattern 15: Blink center only
void patternBlinkCenter() {
  int mid = numRelays / 2;
  for (int i = 0; i < 5; i++) {
    digitalWrite(relayPins[mid - 1], LOW);
    digitalWrite(relayPins[mid], LOW);
    delay(300);
    digitalWrite(relayPins[mid - 1], HIGH);
    digitalWrite(relayPins[mid], HIGH);
    delay(300);
  }
}

// Pattern 16: Sequential ON, instant OFF
void patternSeqOnOff() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(120);
  }
  delay(400);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 17: Ripple (like dropping a pebble in water)
void patternRipple() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - i - 1], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(120);
    digitalWrite(relayPins[mid - i - 1], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 18: All ON → One by one OFF
void patternAllOnStepOff() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(500);
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);
    delay(150);
  }
}

// Pattern 19: Ping Pong with trail
void patternPingPongTrail() {
  for (int i = 0; i < numRelays - 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    digitalWrite(relayPins[i + 2], LOW);
    delay(120);
    digitalWrite(relayPins[i], HIGH);
  }
  for (int i = numRelays - 3; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    digitalWrite(relayPins[i + 2], LOW);
    delay(120);
    digitalWrite(relayPins[i + 2], HIGH);
  }
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 20: Double wave from center
void patternDoubleWave() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(150);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 21: Left fill → right drain
void patternFillDrainOpposite() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  delay(300);
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], HIGH);
    delay(100);
  }
}

// Pattern 22: Half-half alternate
void patternHalfHalf() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays / 2; j++) digitalWrite(relayPins[j], LOW);
    for (int j = numRelays / 2; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(300);
    for (int j = 0; j < numRelays / 2; j++) digitalWrite(relayPins[j], HIGH);
    for (int j = numRelays / 2; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(300);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 23: Scan and sparkle combo
void patternScanSparkle() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    int randPin = random(numRelays);
    digitalWrite(relayPins[randPin], LOW);
    delay(50);
    digitalWrite(relayPins[randPin], HIGH);
  }
}

// Pattern 24: Fast flicker all
void patternFlickerAll() {
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < numRelays; j++) {
      digitalWrite(relayPins[j], random(2) == 0 ? LOW : HIGH);
    }
    delay(100);
  }
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
}

// Pattern 25: Chase + fade
void patternChaseFade() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    delay(50);
  }
}

// Pattern 26: Outer bounce to center
void patternOuterBounce() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 27: Lightning burst
void patternLightningBurst() {
  for (int i = 0; i < 5; i++) {
    int burstCount = random(3, 7);
    for (int j = 0; j < burstCount; j++) {
      int p = random(numRelays);
      digitalWrite(relayPins[p], LOW);
      delay(60);
      digitalWrite(relayPins[p], HIGH);
    }
    delay(200);
  }
}

// Pattern 28: Slow wave
void patternSlowWave() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(200);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 29: Reverse sparkle
void patternReverseSparkle() {
  for (int i = 0; i < 30; i++) {
    int pin = random(numRelays);
    digitalWrite(relayPins[pin], LOW);
    delay(40);
    digitalWrite(relayPins[pin], HIGH);
  }
}

// Pattern 30: Spiral inward
void patternSpiralIn() {
  int left = 0;
  int right = numRelays - 1;
  while (left <= right) {
    digitalWrite(relayPins[left], LOW);
    digitalWrite(relayPins[right], LOW);
    delay(100);
    digitalWrite(relayPins[left], HIGH);
    digitalWrite(relayPins[right], HIGH);
    left++;
    right--;
  }
}

// Pattern 31: Random shimmer flicker
void patternShimmer() {
  for (int i = 0; i < 25; i++) {
    for (int j = 0; j < numRelays; j++) {
      digitalWrite(relayPins[j], random(2) ? LOW : HIGH);
    }
    delay(80);
  }
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
}

// Pattern 32: Pair pulse
void patternPairPulse() {
  for (int i = 0; i < numRelays - 1; i += 2) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    delay(200);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
  }
}

// Pattern 33: Step-in step-out
void patternStepInOut() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(150);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 34: Quick step
void patternQuickStep() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(60);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 35: Bounce flicker
void patternBounceFlicker() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
  }
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 36: Snake reverse trail
void patternSnakeReverse() {
  for (int i = numRelays - 1; i >= 2; i--) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i - 1], LOW);
    digitalWrite(relayPins[i - 2], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 37: Burst fill
void patternBurstFill() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(400);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 38: Spiral out with blink
void patternSpiralOutBlink() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(100);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(200);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(200);
  }
}

// Pattern 39: Sparkle ends only
void patternEdgeSparkle() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(relayPins[0], LOW);
    digitalWrite(relayPins[7], LOW);
    delay(100);
    digitalWrite(relayPins[0], HIGH);
    digitalWrite(relayPins[7], HIGH);
    delay(100);
  }
}

// Pattern 40: Cross ripple
void patternCrossRipple() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 41: Mirror chase
void patternMirrorChase() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(120);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 42: Mid flicker
void patternMidFlicker() {
  int mid = numRelays / 2;
  for (int i = 0; i < 6; i++) {
    digitalWrite(relayPins[mid - 1], LOW);
    digitalWrite(relayPins[mid], LOW);
    delay(100);
    digitalWrite(relayPins[mid - 1], HIGH);
    digitalWrite(relayPins[mid], HIGH);
    delay(100);
  }
}

// Pattern 43: Ping wave
void patternPingWave() {
  for (int i = 0; i < 3; i++) {
    patternWave();
    patternReverseChase();
  }
}

// Pattern 44: Combo flash pairs
void patternComboFlash() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < numRelays; j += 2) {
      digitalWrite(relayPins[j], LOW);
      digitalWrite(relayPins[j + 1], LOW);
      delay(100);
      digitalWrite(relayPins[j], HIGH);
      digitalWrite(relayPins[j + 1], HIGH);
    }
  }
}

// Pattern 45: Inward cascade
void patternCascadeInward() {
  int left = 0, right = numRelays - 1;
  while (left <= right) {
    digitalWrite(relayPins[left], LOW);
    digitalWrite(relayPins[right], LOW);
    delay(100);
    digitalWrite(relayPins[left], HIGH);
    digitalWrite(relayPins[right], HIGH);
    left++;
    right--;
  }
}

// Pattern 46: All-on shimmer
void patternAllOnShimmer() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  for (int i = 0; i < 10; i++) {
    int rand = random(numRelays);
    digitalWrite(relayPins[rand], HIGH);
    delay(60);
    digitalWrite(relayPins[rand], LOW);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 47: Half-fill, half-drain
void patternHalfFillDrain() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  for (int i = numRelays - 1; i >= numRelays / 2; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 48: Sparkle rain
void patternSparkleRain() {
  for (int i = 0; i < 40; i++) {
    int rand = random(numRelays);
    digitalWrite(relayPins[rand], LOW);
    delay(40);
    digitalWrite(relayPins[rand], HIGH);
  }
}

// Pattern 49: Countdown style
void patternCountdown() {
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(200);
  }
  delay(500);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 50: Final burst
void patternFinalBurst() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(100);
  }
}

// Pattern 51: Pair outer-to-inner
void patternPairOuterIn() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 52: Random chaser
void patternRandomChase() {
  for (int i = 0; i < 20; i++) {
    int pin = random(numRelays);
    digitalWrite(relayPins[pin], LOW);
    delay(60);
    digitalWrite(relayPins[pin], HIGH);
  }
}

// Pattern 53: Cross twinkle
void patternCrossTwinkle() {
  for (int i = 0; i < 8; i++) {
    int left = i % (numRelays / 2);
    int right = numRelays - 1 - left;
    digitalWrite(relayPins[left], LOW);
    digitalWrite(relayPins[right], LOW);
    delay(100);
    digitalWrite(relayPins[left], HIGH);
    digitalWrite(relayPins[right], HIGH);
  }
}

// Pattern 54: Sweep left
void patternSweepLeft() {
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 55: All on + random off
void patternRandomOff() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(300);
  for (int i = 0; i < numRelays; i++) {
    int rand = random(numRelays);
    digitalWrite(relayPins[rand], HIGH);
    delay(120);
  }
}

// Pattern 56: Roll in from left
void patternRollIn() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(120);
  }
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);
    delay(120);
  }
}

// Pattern 57: Pulse all slow
void patternPulseAll() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(400);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(400);
  }
}

// Pattern 58: Inner-to-outer fill
void patternFillOutward() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(100);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 59: Strobe flash
void patternStrobe() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(60);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(60);
  }
}

// Pattern 60: Snake + edge pulse
void patternSnakeEdgePulse() {
  patternChase();
  for (int i = 0; i < 3; i++) {
    digitalWrite(relayPins[0], LOW);
    digitalWrite(relayPins[7], LOW);
    delay(150);
    digitalWrite(relayPins[0], HIGH);
    digitalWrite(relayPins[7], HIGH);
  }
}

// Pattern 61: Flash triplets
void patternTriplets() {
  for (int i = 0; i < numRelays - 2; i += 3) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    digitalWrite(relayPins[i + 2], LOW);
    delay(200);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
    digitalWrite(relayPins[i + 2], HIGH);
  }
}

// Pattern 62: Edge inward random flicker
void patternEdgeFlicker() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(relayPins[0], LOW);
    digitalWrite(relayPins[7], LOW);
    delay(80);
    digitalWrite(relayPins[0], HIGH);
    digitalWrite(relayPins[7], HIGH);
    int rand = random(1, 7);
    digitalWrite(relayPins[rand], LOW);
    delay(60);
    digitalWrite(relayPins[rand], HIGH);
  }
}

// Pattern 63: Wave return
void patternWaveReturn() {
  patternWave();
  patternReverseChase();
}

// Pattern 64: Snake pause
void patternSnakePause() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
    delay(50);
  }
}

// Pattern 65: Mid wave bounce
void patternMidWaveBounce() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(120);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
  for (int i = mid - 1; i >= 0; i--) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(120);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 66: Group on, group off
void patternGroupToggle() {
  for (int i = 0; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], LOW);
  }
  delay(300);
  for (int i = 0; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], HIGH);
  }
  for (int i = 1; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], LOW);
  }
  delay(300);
  for (int i = 1; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 67: Inside-out shimmer
void patternInOutShimmer() {
  int mid = numRelays / 2;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < mid; j++) {
      digitalWrite(relayPins[mid - 1 - j], LOW);
      digitalWrite(relayPins[mid + j], LOW);
      delay(80);
      digitalWrite(relayPins[mid - 1 - j], HIGH);
      digitalWrite(relayPins[mid + j], HIGH);
    }
  }
}

// Pattern 68: Looping sparkle
void patternLoopSparkle() {
  for (int i = 0; i < 30; i++) {
    int p = i % numRelays;
    digitalWrite(relayPins[p], LOW);
    delay(60);
    digitalWrite(relayPins[p], HIGH);
  }
}

// Pattern 69: Symmetric jump
void patternSymJump() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(relayPins[0], LOW);
    digitalWrite(relayPins[7], LOW);
    delay(100);
    digitalWrite(relayPins[0], HIGH);
    digitalWrite(relayPins[7], HIGH);
    digitalWrite(relayPins[3], LOW);
    digitalWrite(relayPins[4], LOW);
    delay(100);
    digitalWrite(relayPins[3], HIGH);
    digitalWrite(relayPins[4], HIGH);
  }
}

// Pattern 70: Star pulse (middle > out)
void patternStarPulse() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(80);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}


// Pattern 71: Twin beam inward
void patternTwinInward() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 72: Sweep with pause
void patternSweepPause() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
    delay(80);
  }
  delay(300);
}

// Pattern 73: Heartbeat flicker
void patternHeartbeat() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(100);
  }
  delay(300);
}

// Pattern 74: Random pick pairs
void patternRandomPairs() {
  for (int i = 0; i < 10; i++) {
    int a = random(numRelays);
    int b = random(numRelays);
    digitalWrite(relayPins[a], LOW);
    digitalWrite(relayPins[b], LOW);
    delay(100);
    digitalWrite(relayPins[a], HIGH);
    digitalWrite(relayPins[b], HIGH);
    delay(80);
  }
}

// Pattern 75: Ping sweep bounce
void patternPingSweepBounce() {
  patternWave();
  patternReverseChase();
  delay(200);
}

// Pattern 76: Top-bottom alternate
void patternTopBottomAlternate() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < numRelays / 2; j++) digitalWrite(relayPins[j], LOW);
    for (int j = numRelays / 2; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(200);
    for (int j = 0; j < numRelays / 2; j++) digitalWrite(relayPins[j], HIGH);
    for (int j = numRelays / 2; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(200);
  }
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
}

// Pattern 77: Flash from center out
void patternFlashCenterOut() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(80);
  }
  delay(300);
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
}

// Pattern 78: Alternating shimmer
void patternAltShimmer() {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < numRelays; j++) {
      if (j % 2 == 0)
        digitalWrite(relayPins[j], LOW);
      else
        digitalWrite(relayPins[j], HIGH);
    }
    delay(150);
    for (int j = 0; j < numRelays; j++) {
      if (j % 2 == 1)
        digitalWrite(relayPins[j], LOW);
      else
        digitalWrite(relayPins[j], HIGH);
    }
    delay(150);
  }
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
}

// Pattern 79: Diagonal flash illusion
void patternDiagonalFlash() {
  for (int offset = 0; offset < numRelays; offset++) {
    int p1 = offset;
    int p2 = (offset + 3) % numRelays;
    digitalWrite(relayPins[p1], LOW);
    digitalWrite(relayPins[p2], LOW);
    delay(100);
    digitalWrite(relayPins[p1], HIGH);
    digitalWrite(relayPins[p2], HIGH);
  }
}

// Pattern 80: Double pulse wave
void patternDoublePulse() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(60);
    digitalWrite(relayPins[i], HIGH);
    delay(40);
    digitalWrite(relayPins[i], LOW);
    delay(60);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 81: Edge inward explode
void patternExplode() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(50);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 82: Speed train wave
void patternSpeedTrain() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < numRelays; j++) {
      digitalWrite(relayPins[j], LOW);
      delay(40);
      digitalWrite(relayPins[j], HIGH);
    }
  }
}

// Pattern 83: Ripple & blink
void patternRippleBlink() {
  patternRipple();
  patternBlinkAll();
}

// Pattern 84: Wave from ends
void patternWaveFromEnds() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 85: Pulse then flicker
void patternPulseFlicker() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(200);
  for (int i = 0; i < 6; i++) {
    int p = random(numRelays);
    digitalWrite(relayPins[p], HIGH);
    delay(100);
    digitalWrite(relayPins[p], LOW);
  }
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 86: Center hold, edge dance
void patternCenterHoldEdgeDance() {
  int mid = numRelays / 2;
  digitalWrite(relayPins[mid - 1], LOW);
  digitalWrite(relayPins[mid], LOW);
  for (int i = 0; i < 5; i++) {
    int p = random(0, mid - 1);
    int q = random(mid + 1, numRelays);
    digitalWrite(relayPins[p], LOW);
    digitalWrite(relayPins[q], LOW);
    delay(80);
    digitalWrite(relayPins[p], HIGH);
    digitalWrite(relayPins[q], HIGH);
  }
  digitalWrite(relayPins[mid - 1], HIGH);
  digitalWrite(relayPins[mid], HIGH);
}

// Pattern 87: Rapid fill-drain
void patternRapidFillDrain() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(40);
  }
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], HIGH);
    delay(40);
  }
}

// Pattern 88: Bounce shimmer
void patternBounceShimmer() {
  patternBounce();
  patternShimmer();
}

// Pattern 89: Sequential pair flick
void patternPairFlick() {
  for (int i = 0; i < numRelays - 1; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    delay(120);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
  }
}

// Pattern 90: Spiral combo
void patternSpiralCombo() {
  patternSpiralIn();
  patternSpiralOutBlink();
}

// Pattern 91: Full blink storm
void patternBlinkStorm() {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(80);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(80);
  }
}

// Pattern 92: Right to left rapid
void patternRapidSweepLeft() {
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(40);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 93: Outer bounce ripple
void patternOuterRipple() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 94: Middle race out
void patternRaceOut() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(70);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 95: Slow pulse all
void patternSlowPulse() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(500);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(500);
  }
}

// Pattern 96: Fast flicker chase
void patternFlickerChase() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(40);
    digitalWrite(relayPins[i], HIGH);
    delay(20);
  }
  delay(200);
}

// Pattern 97: Even–odd punch
void patternEvenOddPunch() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 98: Cross fill
void patternCrossFill() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(50);
  }
  for (int i = numRelays - 1; i >= numRelays / 2; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(50);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 99: Ring wave
void patternRingWave() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) {
      digitalWrite(relayPins[j], LOW);
      delay(60);
      digitalWrite(relayPins[j], HIGH);
    }
  }
}

// Pattern 100: Grand finale (flash + ripple + shimmer)
void patternGrandFinale() {
  patternBlinkAll();
  patternRipple();
  patternShimmer();
}

// Pattern 101: Zig-Zag Left-Right
void patternZigZagLR() {
  for (int i = 0; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
  for (int i = 1; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 102: All On → Center-Off
void patternCenterOff() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(400);
  int mid = numRelays / 2;
  digitalWrite(relayPins[mid - 1], HIGH);
  digitalWrite(relayPins[mid], HIGH);
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 103: Pulse Corners
void patternCornerPulse() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(relayPins[0], LOW);
    digitalWrite(relayPins[7], LOW);
    delay(100);
    digitalWrite(relayPins[0], HIGH);
    digitalWrite(relayPins[7], HIGH);
    delay(100);
  }
}

// Pattern 104: Ping Steps Outward
void patternStepOutward() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(80);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 105: Edge Walk Inward
void patternEdgeWalkInward() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(120);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 106: Random Ripple Flash
void patternRandomRipple() {
  for (int i = 0; i < 25; i++) {
    int a = random(numRelays);
    int b = (a + 1) % numRelays;
    digitalWrite(relayPins[a], LOW);
    digitalWrite(relayPins[b], LOW);
    delay(100);
    digitalWrite(relayPins[a], HIGH);
    digitalWrite(relayPins[b], HIGH);
  }
}

// Pattern 107: One-Off Ladder
void patternOneOffLadder() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 108: Odd-Even Quick Flick
void patternQuickOddEven() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 109: Group Step Flicker
void patternGroupStep() {
  for (int i = 0; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
  }
}

// Pattern 110: Grand Wave Combo
void patternGrandWaveCombo() {
  patternWave();
  patternReverseChase();
  patternSpiralCombo(); 
}

// Pattern 111: Inside-out Pop Flick
void patternInsideOutPop() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(70);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 112: Corner Flash Loop
void patternCornerLoop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(relayPins[0], LOW);
    digitalWrite(relayPins[7], LOW);
    delay(80);
    digitalWrite(relayPins[0], HIGH);
    digitalWrite(relayPins[7], HIGH);
    delay(80);
    digitalWrite(relayPins[3], LOW);
    digitalWrite(relayPins[4], LOW);
    delay(80);
    digitalWrite(relayPins[3], HIGH);
    digitalWrite(relayPins[4], HIGH);
    delay(80);
  }
}

// Pattern 113: Mirror Flow
void patternMirrorFlow() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(60);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 114: Alternating Throb
void patternAltThrob() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(150);
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(150);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 115: Triple Flash Bounce
void patternTripleFlashBounce() {
  for (int i = 0; i < numRelays; i++) {
    for (int j = 0; j < 3; j++) {
      digitalWrite(relayPins[i], LOW);
      delay(60);
      digitalWrite(relayPins[i], HIGH);
      delay(60);
    }
  }
}

// Pattern 116: All Blink Slow
void patternAllBlinkSlow() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(500);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(500);
  }
}

// Pattern 117: Ladder Flash Forward
void patternLadderForward() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  delay(200);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 118: Ladder Flash Reverse
void patternLadderReverse() {
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  delay(200);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 119: Bounce Outer In
void patternBounceOuterIn() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 120: Sparkle Train
void patternSparkleTrain() {
  for (int i = 0; i < 24; i++) {
    int r = random(numRelays);
    digitalWrite(relayPins[r], LOW);
    delay(50);
    digitalWrite(relayPins[r], HIGH);
  }
}

// Pattern 121: Rolling Pulse
void patternRollingPulse() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) {
      digitalWrite(relayPins[j], LOW);
      delay(70);
      digitalWrite(relayPins[j], HIGH);
    }
  }
}

// Pattern 122: Sweep with Hold
void patternSweepHold() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  delay(500);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 123: Snake Wiggle
void patternSnakeWiggle() {
  for (int i = 0; i < numRelays - 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
  }
}

// Pattern 124: Pulse Chunks
void patternPulseChunks() {
  for (int i = 0; i < numRelays; i += 2) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    delay(200);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
  }
}

// Pattern 125: Center Toggle Flash
void patternCenterToggle() {
  int mid = numRelays / 2;
  for (int i = 0; i < 6; i++) {
    digitalWrite(relayPins[mid - 1], LOW);
    digitalWrite(relayPins[mid], LOW);
    delay(100);
    digitalWrite(relayPins[mid - 1], HIGH);
    digitalWrite(relayPins[mid], HIGH);
    delay(100);
  }
}

// Pattern 126: Alternating Waves
void patternAltWaves() {
  for (int i = 0; i < numRelays; i++) {
    if (i % 2 == 0)
      digitalWrite(relayPins[i], LOW);
    else
      digitalWrite(relayPins[i], HIGH);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) {
    if (i % 2 != 0)
      digitalWrite(relayPins[i], LOW);
    else
      digitalWrite(relayPins[i], HIGH);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 127: Fast Spark Fill
void patternFastSparkFill() {
  for (int i = 0; i < numRelays; i++) {
    int r = random(numRelays);
    digitalWrite(relayPins[r], LOW);
    delay(40);
    digitalWrite(relayPins[r], HIGH);
  }
}

// Pattern 128: Reverse Step Flash
void patternReverseStepFlash() {
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 129: Pulse In → Out → In
void patternInOutIn() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(80);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
  delay(300);
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(80);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 130: Burst Flash Explosion
void patternBurstExplosion() {
  for (int i = 0; i < 5; i++) {
    int r1 = random(numRelays);
    int r2 = random(numRelays);
    digitalWrite(relayPins[r1], LOW);
    digitalWrite(relayPins[r2], LOW);
    delay(60);
    digitalWrite(relayPins[r1], HIGH);
    digitalWrite(relayPins[r2], HIGH);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  delay(200);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 131: Slide Center In
void patternSlideCenterIn() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 132: Slide Center Out
void patternSlideCenterOut() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(80);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 133: Cascade Fade
void patternCascadeFade() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(60);
  }
  delay(200);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 134: Shuffle Sparkle
void patternShuffleSparkle() {
  for (int i = 0; i < 10; i++) {
    int r = random(numRelays);
    digitalWrite(relayPins[r], LOW);
    delay(40);
    digitalWrite(relayPins[r], HIGH);
  }
  delay(200);
}

// Pattern 135: Fast Pulse In-Out
void patternFastInOutPulse() {
  int mid = numRelays / 2;
  for (int i = 0; i < mid; i++) {
    digitalWrite(relayPins[mid - 1 - i], LOW);
    digitalWrite(relayPins[mid + i], LOW);
    delay(40);
    digitalWrite(relayPins[mid - 1 - i], HIGH);
    digitalWrite(relayPins[mid + i], HIGH);
  }
}

// Pattern 136: Random Blink Party
void patternRandomParty() {
  for (int i = 0; i < 30; i++) {
    int p = random(numRelays);
    digitalWrite(relayPins[p], LOW);
    delay(30);
    digitalWrite(relayPins[p], HIGH);
  }
}

// Pattern 137: Double Chase Flash
void patternDoubleChase() {
  for (int i = 0; i < numRelays - 1; i += 2) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[i + 1], LOW);
    delay(70);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[i + 1], HIGH);
  }
}

// Pattern 138: Backward Blink Run
void patternReverseRun() {
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 139: Explosion Spark
void patternExplosionSpark() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(100);
  }
  for (int j = 0; j < numRelays; j++) {
    int randPin = random(numRelays);
    digitalWrite(relayPins[randPin], LOW);
    delay(40);
    digitalWrite(relayPins[randPin], HIGH);
  }
}

// Pattern 140: Heartbeat Flash Finale
void patternHeartbeatFinale() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(120);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(100);
  }
  delay(200);
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
  delay(300);
  for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
}

// Pattern 141: Sweep Blink Combo
void patternSweepBlinkCombo() {
  patternWave();
  patternBlinkAll();
}

// Pattern 142: Chase with Hold
void patternChaseHold() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(100);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 143: Group Spark Flash
void patternGroupSparkFlash() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 1; j < numRelays; j += 2) digitalWrite(relayPins[j], HIGH);
  }
}

// Pattern 144: Wave Delay Step
void patternWaveDelayStep() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(150);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 145: Stagger Flash
void patternStaggerFlash() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(50);
  }
  delay(300);
  for (int i = numRelays - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], HIGH);
    delay(50);
  }
}

// Pattern 146: Random Double Spark
void patternRandomDoubleSpark() {
  for (int i = 0; i < 20; i++) {
    int a = random(numRelays);
    int b = random(numRelays);
    digitalWrite(relayPins[a], LOW);
    digitalWrite(relayPins[b], LOW);
    delay(60);
    digitalWrite(relayPins[a], HIGH);
    digitalWrite(relayPins[b], HIGH);
  }
}

// Pattern 147: Cross Mirror Bounce
void patternCrossBounce() {
  for (int i = 0; i < numRelays / 2; i++) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
  for (int i = numRelays / 2 - 1; i >= 0; i--) {
    digitalWrite(relayPins[i], LOW);
    digitalWrite(relayPins[numRelays - 1 - i], LOW);
    delay(80);
    digitalWrite(relayPins[i], HIGH);
    digitalWrite(relayPins[numRelays - 1 - i], HIGH);
  }
}

// Pattern 148: One-by-One Spark
void patternOneByOneSpark() {
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(60);
    digitalWrite(relayPins[i], HIGH);
  }
}

// Pattern 149: All-On, One-Off Sweep
void patternAllOnOneOff() {
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], LOW);
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], HIGH);
    delay(100);
    digitalWrite(relayPins[i], LOW);
  }
  delay(300);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}

// Pattern 150: Finale Rainbow Pulse
void patternFinalePulse() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], LOW);
    delay(100);
    for (int j = 0; j < numRelays; j++) digitalWrite(relayPins[j], HIGH);
    delay(100);
  }
  for (int i = 0; i < numRelays; i++) {
    digitalWrite(relayPins[i], LOW);
    delay(80);
  }
  delay(400);
  for (int i = 0; i < numRelays; i++) digitalWrite(relayPins[i], HIGH);
}





