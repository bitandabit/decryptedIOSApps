//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCaption-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCCaptionCarouselView, SCCaptionControlledView, SCCaptionTouchControlUIView, SCExperimentManager, SCPreviewCaptionTextView, SOJUCaptionStyle, UIColor, UIScrollView, UIToolbar;
@protocol SCCaptionDelegate;

@interface SCCaptionBigTextPlusView : NSObject <UIGestureRecognizerDelegate, UITextViewDelegate, SCCaption>
{
    SOJUCaptionStyle *_captionStyle;
    NSArray *_fontColors;
    UIColor *_shadowColor;
    UIColor *_textBackgroundColor;
    UIColor *_pickedColor;
    SCExperimentManager *_experimentManager;
    long long _userTaggingStartIndex;
    _Bool _shouldEnableUserTagging;
    NSMutableDictionary *_taggedUsers;
    long long _captionExitSource;
    _Bool _isCaptionBackgroundViewAnimating;
    _Bool _editing;
    _Bool _colorChanged;
    _Bool _manuallyScaled;
    _Bool _isLagunaMedia;
    long long uniqueId;
    id <SCCaptionDelegate> _delegate;
    SCCaptionControlledView *_containerView;
    UIToolbar *_blurToolbar;
    SCCaptionTouchControlUIView *_textContainerView;
    SCCaptionCarouselView *_captionCarouselView;
    UIScrollView *_textScrollView;
    SCPreviewCaptionTextView *_textView;
    double _lastTranslationX;
    double _lastTranslationY;
    double _lastRotation;
    double _lastScale;
    double _lastEditingScale;
    double _lastPreviewScale;
    double _fontSize;
    double _editingFontSize;
    double _fontSizeMultiplier;
    long long _mode;
    double _keyboardHeight;
    long long _currentOrientation;
    double _lineFragmentPadding;
    long long _originalOrientation;
    struct CGRect _superviewBounds;
    struct CGRect _superviewContentBounds;
    struct UIEdgeInsets _tempTextInsets;
    struct CGRect _originalContentBounds;
}

@property(nonatomic) long long originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) struct CGRect originalContentBounds; // @synthesize originalContentBounds=_originalContentBounds;
@property(nonatomic) _Bool isLagunaMedia; // @synthesize isLagunaMedia=_isLagunaMedia;
@property(nonatomic) _Bool manuallyScaled; // @synthesize manuallyScaled=_manuallyScaled;
@property(nonatomic) _Bool colorChanged; // @synthesize colorChanged=_colorChanged;
@property(nonatomic) struct UIEdgeInsets tempTextInsets; // @synthesize tempTextInsets=_tempTextInsets;
@property(nonatomic) double lineFragmentPadding; // @synthesize lineFragmentPadding=_lineFragmentPadding;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
@property(nonatomic) double editingFontSize; // @synthesize editingFontSize=_editingFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double lastPreviewScale; // @synthesize lastPreviewScale=_lastPreviewScale;
@property(nonatomic) double lastEditingScale; // @synthesize lastEditingScale=_lastEditingScale;
@property(nonatomic) double lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) double lastRotation; // @synthesize lastRotation=_lastRotation;
@property(nonatomic) double lastTranslationY; // @synthesize lastTranslationY=_lastTranslationY;
@property(nonatomic) double lastTranslationX; // @synthesize lastTranslationX=_lastTranslationX;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) SCPreviewCaptionTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *textScrollView; // @synthesize textScrollView=_textScrollView;
@property(retain, nonatomic) SCCaptionCarouselView *captionCarouselView; // @synthesize captionCarouselView=_captionCarouselView;
@property(retain, nonatomic) SCCaptionTouchControlUIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UIToolbar *blurToolbar; // @synthesize blurToolbar=_blurToolbar;
@property(retain, nonatomic) SCCaptionControlledView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool isCaptionBackgroundViewAnimating; // @synthesize isCaptionBackgroundViewAnimating=_isCaptionBackgroundViewAnimating;
@property(nonatomic) struct CGRect superviewContentBounds; // @synthesize superviewContentBounds=_superviewContentBounds;
@property(nonatomic) struct CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;
@property(nonatomic) __weak id <SCCaptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId;
- (void).cxx_destruct;
- (id)state;
- (_Bool)hasStyling;
- (id)shareLoggingParameters;
- (long long)_findPreviousUserTaggingPositionFromPostion:(long long)arg1;
- (id)regexSearchForUserTags;
- (_Bool)_shouldEnableCaptionStyles;
- (struct UIEdgeInsets)_findRightInsetsForEditing:(struct UIEdgeInsets)arg1;
- (id)_patternImageForGradientColors:(id)arg1 gradientOrientation:(long long)arg2;
- (_Bool)_shouldShowCaptionStyleOptions;
- (void)_setFontColor;
- (void)_setShadow;
- (void)_setTextBackground;
- (_Bool)_needUpdateColor;
- (void)_updateColorPicker;
- (void)_updateCaptionStyle;
- (void)_updateCaptionStyleColor:(id)arg1;
- (void)_adjustKeyboardAnimationSpeed:(CDUnknownBlockType)arg1;
- (void)_adjustAnimationsSpeedForView:(id)arg1 withSpeed:(double)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)isTracking;
- (struct CGRect)screenshotFrame;
- (id)screenshotImageView;
- (void)colorChanged:(id)arg1;
- (void)rotateFromOrientation:(long long)arg1 toOrientation:(long long)arg2 fromSuperviewContentBounds:(struct CGRect)arg3 toSuperviewContentBounds:(struct CGRect)arg4;
- (double)_rotationFromOrientation:(long long)arg1;
- (void)viewDidLayoutSubviewsWithOrientation:(long long)arg1 superviewBounds:(struct CGRect)arg2 superviewContentBounds:(struct CGRect)arg3;
- (double)_findRightFontSize:(id)arg1;
- (void)_updateCaptionStyleCarouselViewFrame;
- (void)_updateEditModeFrameLoc;
- (void)_resizeWithScreenWidthInEditingMode:(_Bool)arg1 updateLastLocation:(_Bool)arg2 shouldChangeFont:(_Bool)arg3;
- (void)_adjustTextContainerInsetsRetainingOrigin:(struct UIEdgeInsets)arg1;
- (void)_setTextOrigin:(struct CGPoint)arg1;
- (struct CGPoint)_textOrigin;
- (void)_resize;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)_didStopEditingAnimated:(_Bool)arg1;
- (void)_prepareToStopEditing;
- (void)_didStartEditingAnimated:(_Bool)arg1;
- (void)_prepareToStartEditing;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (double)_verticalCoordinate;
- (struct CGPoint)_anchorFromCenterPoint:(struct CGPoint)arg1 textWidth:(double)arg2;
- (struct CGPoint)_anchorFromCenterPoint:(struct CGPoint)arg1;
- (struct CGPoint)_centerFromAnchorPoint:(struct CGPoint)arg1;
- (long long)_contentWidth;
- (long long)_maxTextWidth;
- (void)_updateLastTranslation;
- (void)_changeScaleBasedOnFontSize;
- (void)_changeFontSizeBasedOnScale;
- (void)setCaptionStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)captionPresent;
- (_Bool)isFullscreen;
- (id)attributedText;
- (void)_removeTaggedUserAtIndexIfNecessary:(long long)arg1;
- (void)addTaggedUser:(id)arg1;
- (long long)captionExitSource;
- (void)setCaptionExitSource:(long long)arg1;
- (id)searchableNameForFriendFiltering;
- (id)pickedColor;
- (id)captionStyle;
- (id)text;
- (_Bool)isEditing;
- (_Bool)isHidden;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)_resetFontSizePositionAndRotation;
- (void)_setTopAlphaGradientEnabled:(_Bool)arg1;
- (void)_removeBlurViewToBackground;
- (void)_addBlurViewToBackground;
- (void)_configureTextViewBasedOnEditModeAnimated:(_Bool)arg1;
- (id)view;
- (void)clearText;
- (void)tearDownAndRemoveFromSuperview;
- (void)dealloc;
- (void)_initializeLastLocations:(double)arg1;
- (void)leftSwipe:(id)arg1;
- (void)rightSwipe:(id)arg1;
- (void)leftAlign;
- (void)centerAlign;
- (void)initializeViewsWithState:(id)arg1;
- (id)initWithState:(id)arg1 delegate:(id)arg2 isLagunaMedia:(_Bool)arg3 shouldEnableUserTagging:(_Bool)arg4 initialTransform:(struct CGAffineTransform)arg5 originalContentBounds:(struct CGRect)arg6 orientation:(long long)arg7 captionCarouselView:(id)arg8 superviewBounds:(struct CGRect)arg9 superviewContentBounds:(struct CGRect)arg10 experimentManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
