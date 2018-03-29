//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCMapErrorViewDelegate-Protocol.h"
#import "SCMapStyleListener-Protocol.h"

@class NSString, SCMapErrorView, SCUserSession, UIView;
@protocol SCMapErrorViewManagerDelegate;

@interface SCMapErrorViewManager : NSObject <SCMapErrorViewDelegate, SCMapStyleListener>
{
    UIView *_baseView;
    SCMapErrorView *_currentErrorView;
    SCUserSession *_userSession;
    id <SCMapErrorViewManagerDelegate> _delegate;
}

+ (_Bool)_noPreferencesErrorViewShouldBeDisplayedWithUserSession:(id)arg1;
+ (_Bool)_connectionErrorViewShouldBeDisplayed;
+ (_Bool)_unavailableErrorViewShouldBeDisplayedWithUserSession:(id)arg1;
+ (_Bool)shouldDisplayErrorViewWithUserSession:(id)arg1;
@property(nonatomic) __weak id <SCMapErrorViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)mapErrorViewDidTapBackButton:(id)arg1;
- (void)mapStyleLoader:(id)arg1 hasUpdateForStyle:(int)arg2;
- (void)_locationSharingServicePreferencesUpdatedNotification:(id)arg1;
- (void)_reachabilityDidChangeNotification:(id)arg1;
- (void)reload;
@property(readonly, nonatomic) _Bool displayingBlockUse;
@property(readonly, nonatomic) _Bool displayingErrorView;
- (void)dealloc;
- (id)initWithBaseView:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

