//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCScanCardOpenUrlProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSURL, SCLens, SCOpenUrlOperaViewPresenter, SCScanCardButton, SCUserSession, UIImageView, UILabel, UIView;
@protocol SCScanCardOpenUrlDelegate;

@interface SCScanCardLensInfoTableViewCell : SCScanCardTableViewCell <UIGestureRecognizerDelegate, SCScanCardOpenUrlProtocol>
{
    SCLens *_lens;
    NSString *_displayUsername;
    NSString *_fallbackTitle;
    struct _NSRange _linkRange;
    SCScanCardButton *_okButton;
    UIImageView *_thumbnailImageView;
    UIView *_headerBackgroundView;
    UILabel *_creatorUserNameLabel;
    UILabel *_lensNameLabel;
    UIView *_divider;
    UILabel *_createdWithLabel;
    NSURL *_lensStudioUrl;
    SCOpenUrlOperaViewPresenter *_openUrlPresenter;
    SCUserSession *_userSession;
    id <SCScanCardOpenUrlDelegate> openUrlDelegate;
}

@property(nonatomic) __weak id <SCScanCardOpenUrlDelegate> openUrlDelegate; // @synthesize openUrlDelegate;
- (void).cxx_destruct;
- (void)_tapCreatedWithLabel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_dismiss;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)updateStyle;
- (void)_setupBrowser;
- (id)initWithLens:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

