/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface FullscreenLandscapeAnalogClockView : AnalogClockView {
}

+ (BOOL)doesFaceHaveShadow;
+ (float)faceRadius;
+ (struct CGPoint { float x1; float x2; })handRotationalCenterForHand:(int)arg1;
+ (id)makeClockFaceForDaytime:(BOOL)arg1;
+ (id)makeClockHand:(int)arg1 daytime:(BOOL)arg2;
+ (id)makeOverSecondHandDotImage;
+ (id)overHourHandDotImageForDaytime:(BOOL)arg1;
+ (id)resourcePath;
+ (BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2;
+ (int)style;

- (double)coarseUpdateInterval;
- (double)updateInterval;

@end
