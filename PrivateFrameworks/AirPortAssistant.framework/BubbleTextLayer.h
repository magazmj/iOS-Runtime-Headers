/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSMutableArray, CALayer;

@interface BubbleTextLayer : CALayer {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSMutableArray *_annotationPoints;
    float _ascent;
    } _boundsSizeConstraint;
    } _bubbleFrame;
    } _bubbleSize;
    } _contentSize;
    struct __CTFont { } *_curCTFont;
    float _descent;
    void *_font;
    } _fontBounds;
    struct CGColor { } *_generalShadowColor;
    CALayer *_imageLayer;
    } _imageLayerSize;
    float _leading;
    } _textFrame;
    } _textSize;
    struct __CTLine { } *_theLine;
    struct CGColor { } *_whiteShadowColor;
}

@property struct CGSize { float x1; float x2; } boundsSizeConstraint;
@property(retain) struct CGColor { }* fillColor2;
@property(retain) struct CGColor { }* fillColor;
@property(retain) void* font;
@property float fontSize;
@property(retain) struct CGColor { }* foregroundColor;
@property(retain) struct CGColor { }* frameColor;
@property float frameWidth;
@property(retain) struct CGImage { }* image;
@property(retain) id string;
@property(readonly) float textBaselineOffset;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } textFrame;

+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)addAnnotationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })calculatePreferredSubframeSizesForLayerSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void*)font;
- (struct CGSize { float x1; float x2; })getImagePreferredSize;
- (struct CGImage { }*)image;
- (id)init;
- (BOOL)isAnnotationBubble;
- (void)layoutSublayers;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)setFont:(void*)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (float)textBaselineOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (struct CGSize { float x1; float x2; })textPreferredFrameSizeForLayerSize:(struct CGSize { float x1; float x2; })arg1;

@end