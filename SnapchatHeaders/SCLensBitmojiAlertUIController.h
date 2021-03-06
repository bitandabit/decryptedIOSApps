//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCLensBitmojiProvider, SCLensPopoverView, UIButton, UIImageView, UILabel, UIView;

@interface SCLensBitmojiAlertUIController : NSObject
{
    UIView *_parentView;
    UIView *_lensContainer;
    SCLensPopoverView *_view;
    UIView *_contentView;
    UILabel *_promptMessageLabel;
    UIButton *_promptButton;
    UIImageView *_promptImageView;
    _Bool _isRunningAppearanceAnimation;
    _Bool _isRunningDismissalAnimation;
    SCLensBitmojiProvider *_lensBitmojiProvider;
    NSString *_lensId;
    _Bool _isShown;
}

@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
- (void).cxx_destruct;
- (void)_linkBitmoji;
- (_Bool)pointInside:(struct CGPoint)arg1 view:(id)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1 lensId:(id)arg2;
- (void)_cleanupUI;
- (void)_setupAlert;
- (void)_setupContentView;
- (void)_setupView;
- (void)_setupUI;
- (id)initWithParentView:(id)arg1 lensContainer:(id)arg2 lensBitmojiProvider:(id)arg3;

@end

