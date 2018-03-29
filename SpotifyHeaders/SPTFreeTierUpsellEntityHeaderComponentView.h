//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewContentOffsetObserver.h"
#import "EXP_HUBComponentViewWithEvents.h"
#import "EXP_HUBComponentViewWithImageHandling.h"

@class GLUEButton, GLUEGradientView, GLUEImageView, GLUEInteractiveAnimation, GLUELabel, SPTFreeTierUpsellEntityHeaderStyle, SPTFreeTierUpsellGLUETheme, SPTFreeTierUpsellLegalTextView, UIImageView, UIView;

@interface SPTFreeTierUpsellEntityHeaderComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents, EXP_HUBComponentViewContentOffsetObserver>
{
    _Bool _legalTextConfigured;
    id <EXP_HUBComponentEventHandler> eventHandler;
    GLUEImageView *_coverArtImageView;
    GLUELabel *_entityTitleLabel;
    GLUELabel *_messageLabel;
    GLUELabel *_noteLabel;
    GLUEButton *_ctaButton;
    SPTFreeTierUpsellLegalTextView *_legalTextView;
    UIImageView *_backgroundImageView;
    GLUEGradientView *_bottomGradientView;
    UIView *_containerView;
    SPTFreeTierUpsellGLUETheme *_theme;
    SPTFreeTierUpsellEntityHeaderStyle *_componentStyle;
    GLUEInteractiveAnimation *_headerAlphaAnimation;
    GLUEInteractiveAnimation *_childScaleAnimation;
    struct CGSize _containerViewSize;
    struct CGSize _cachedOriginalSize;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
+ (id)ctaButtonStyleForModel:(id)arg1 theme:(id)arg2;
+ (id)legalTextComponentModelFromModel:(id)arg1;
+ (id)noteTextFromModel:(id)arg1;
+ (id)messageTextFromModel:(id)arg1;
@property(retain, nonatomic) GLUEInteractiveAnimation *childScaleAnimation; // @synthesize childScaleAnimation=_childScaleAnimation;
@property(retain, nonatomic) GLUEInteractiveAnimation *headerAlphaAnimation; // @synthesize headerAlphaAnimation=_headerAlphaAnimation;
@property(nonatomic) _Bool legalTextConfigured; // @synthesize legalTextConfigured=_legalTextConfigured;
@property(nonatomic) struct CGSize cachedOriginalSize; // @synthesize cachedOriginalSize=_cachedOriginalSize;
@property(copy, nonatomic) SPTFreeTierUpsellEntityHeaderStyle *componentStyle; // @synthesize componentStyle=_componentStyle;
@property(nonatomic) struct CGSize containerViewSize; // @synthesize containerViewSize=_containerViewSize;
@property(retain, nonatomic) SPTFreeTierUpsellGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) GLUEGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) SPTFreeTierUpsellLegalTextView *legalTextView; // @synthesize legalTextView=_legalTextView;
@property(retain, nonatomic) GLUEButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) GLUELabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) GLUELabel *entityTitleLabel; // @synthesize entityTitleLabel=_entityTitleLabel;
@property(retain, nonatomic) GLUEImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;
- (void).cxx_destruct;
- (void)legalTextTapped;
- (void)ctaButtonPressed;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (struct CGSize)preferredSizeForContainerViewSize:(struct CGSize)arg1;
- (void)configurePlaceholderForCoverArtFromIcon:(id)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)setupAndConfigureLegalTextWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)themeUpdated;
- (void)addLayoutConstraints;
- (void)setupAnimators;
- (void)setupSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
