/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUChronologicalProgressViewDelegate>, MPDetailScrubController, NSString, UILabel, UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding>;

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate> {
    double _currentTime;
    UILabel *_currentTimeLabel;
    <MPUChronologicalProgressViewDelegate> *_delegate;
    NSString *_lastCurrentTimeString;
    double _lastDisplayedDuration;
    NSString *_lastRemainingTimeString;
    UILabel *_remainingTimeLabel;
    MPDetailScrubController *_scrubController;
    BOOL _scrubbingEnabled;
    BOOL _showTimeLabels;
    UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding> *_slider;
    int _style;
    double _totalDuration;
}

@property double currentTime;
@property <MPUChronologicalProgressViewDelegate> * delegate;
@property BOOL scrubbingEnabled;
@property BOOL showTimeLabels;
@property(readonly) int style;
@property double totalDuration;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } trackRect;

- (void).cxx_destruct;
- (id)_createTimeLabelWithStyle:(int)arg1;
- (void)_internalSetCurrentTime:(double)arg1;
- (float)_sliderNormalizedValueForTime:(double)arg1;
- (id)_styledImageName:(id)arg1;
- (id)_thumbImage;
- (id)_timeLabelFont;
- (id)_trackImage;
- (void)_updateTimeLabels;
- (double)currentTime;
- (id)delegate;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubControllerDidBeginScrubbing:(id)arg1;
- (void)detailScrubControllerDidEndScrubbing:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (BOOL)scrubbingEnabled;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScrubbingEnabled:(BOOL)arg1;
- (void)setShowTimeLabels:(BOOL)arg1;
- (void)setTotalDuration:(double)arg1;
- (BOOL)showTimeLabels;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (double)totalDuration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRect;

@end
