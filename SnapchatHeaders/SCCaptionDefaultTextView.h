//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCaption-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSAttributedString, NSMutableDictionary, NSString, SCCaptionCarouselView, SCCaptionControlledView, SCExperimentManager, SCPreviewCaptionTextView, SCTouchControlUIView, SOJUCaptionStyle, UIColor;
@protocol SCCaptionDelegate;

@interface SCCaptionDefaultTextView : NSObject <UITextViewDelegate, SCCaption>
{
    NSAttributedString *_attributedTextInBigText;
    _Bool _isLagunaMedia;
    _Bool _shouldEnableUserTagging;
    double _captionFontSize;
    double _circleRadius;
    _Bool _isAnimating;
    SOJUCaptionStyle *_captionStyle;
    UIColor *_pickedColor;
    _Bool _colorChanged;
    long long _userTaggingStartIndex;
    SCExperimentManager *_experimentManager;
    long long _captionExitSource;
    NSMutableDictionary *_taggedUsers;
    _Bool _editing;
    long long uniqueId;
    id <SCCaptionDelegate> _delegate;
    SCTouchControlUIView *_textContainerView;
    SCCaptionControlledView *_containerView;
    double _lastVertical;
    SCPreviewCaptionTextView *_textView;
    SCCaptionCarouselView *_captionCarouselView;
    double _keyboardHeight;
    long long _currentOrientation;
    struct CGRect _superviewBounds;
    struct CGRect _superviewContentBounds;
}

@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) struct CGRect superviewContentBounds; // @synthesize superviewContentBounds=_superviewContentBounds;
@property(nonatomic) struct CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) SCCaptionCarouselView *captionCarouselView; // @synthesize captionCarouselView=_captionCarouselView;
@property(retain, nonatomic) SCPreviewCaptionTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double lastVertical; // @synthesize lastVertical=_lastVertical;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) SCCaptionControlledView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCTouchControlUIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) __weak id <SCCaptionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId;
- (void).cxx_destruct;
- (id)state;
- (_Bool)hasStyling;
- (id)shareLoggingParameters;
- (_Bool)_shouldEnableCaptionStyles;
- (void)_adjustKeyboardAnimationSpeed:(CDUnknownBlockType)arg1;
- (void)_adjustAnimationsSpeedForView:(id)arg1 withSpeed:(double)arg2;
- (struct CGRect)screenshotFrame;
- (id)screenshotImageView;
- (void)viewDidLayoutSubviewsWithOrientation:(long long)arg1 superviewBounds:(struct CGRect)arg2 superviewContentBounds:(struct CGRect)arg3;
- (void)resizeForViewing;
- (void)resizeForEditing;
- (long long)_findPreviousUserTaggingPositionFromPostion:(long long)arg1;
- (void)_resetLayout;
- (struct CGRect)textViewFrame;
- (struct CGRect)textContainerViewFrame;
- (struct CGRect)_captionCarouselViewFrame;
- (struct CGRect)_textViewFrameForAnimation;
- (struct CGRect)_textContainerViewFrameForAnimation;
- (double)adjustedYOffsetForContentBounds:(double)arg1 textViewHeight:(double)arg2;
- (id)attributedText;
- (long long)captionExitSource;
- (void)setCaptionExitSource:(long long)arg1;
- (id)pickedColor;
- (void)colorChanged:(id)arg1;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pinch:(id)arg1;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)didStopEditingAnimated:(_Bool)arg1;
- (void)prepareToStopEditing;
- (void)didStartEditingAnimated:(_Bool)arg1;
- (void)prepareToStartEditing;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (long long)contentMargin;
- (long long)contentWidth;
- (long long)maxTextWidth;
- (void)setCaptionStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)captionPresent;
- (_Bool)isFullscreen;
- (void)_removeTaggedUserAtIndexIfNecessary:(long long)arg1;
- (id)regexSearchForUserTags;
- (void)addTaggedUser:(id)arg1;
- (id)searchableNameForFriendFiltering;
- (id)captionStyle;
- (id)text;
- (_Bool)isHidden;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)configureTextViewBasedOnEditMode;
- (id)view;
- (void)tearDownAndRemoveFromSuperview;
- (void)dealloc;
- (void)initializeViewsWithState:(id)arg1;
- (long long)mode;
- (id)initWithState:(id)arg1 delegate:(id)arg2 isLagunaMedia:(_Bool)arg3 shouldEnableUserTagging:(_Bool)arg4 initialTransform:(struct CGAffineTransform)arg5 originalContentBounds:(struct CGRect)arg6 orientation:(long long)arg7 captionCarouselView:(id)arg8 superviewBounds:(struct CGRect)arg9 superviewContentBounds:(struct CGRect)arg10 experimentManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

