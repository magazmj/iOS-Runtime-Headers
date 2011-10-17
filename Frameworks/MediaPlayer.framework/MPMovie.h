/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL;

@interface MPMovie : NSObject  {
    id _internal;
}

@property(readonly) NSURL * url;
@property(readonly) int movieMediaTypes;
@property int movieSourceType;
@property(readonly) double duration;
@property(readonly) double playableDuration;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property double startPlaybackTime;
@property double endPlaybackTime;

+ (id)movieWithURL:(id)arg1 error:(id*)arg2;

- (void)_determineMediaType;
- (void)_typeAvailableNotification:(id)arg1;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (id)_initWithURL:(id)arg1 error:(id*)arg2;
- (id)_MPArrayQueueItem;
- (double)startPlaybackTime;
- (void)setStartPlaybackTime:(double)arg1;
- (double)endPlaybackTime;
- (void)setEndPlaybackTime:(double)arg1;
- (double)playableDuration;
- (int)movieSourceType;
- (void)setMovieSourceType:(int)arg1;
- (int)movieMediaTypes;
- (double)duration;
- (id)url;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)dealloc;

@end