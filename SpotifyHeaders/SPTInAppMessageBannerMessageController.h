//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTInAppMessageBannerMessagePriorityDeciderDelegate.h"

@class NSString, SPTInAppMessageActionFactory, SPTInAppMessageBannerMessageParser, SPTInAppMessageBannerMessageViewModel, SPTInAppMessageBannerPresentationController, SPTInAppMessageServiceLogger;

@interface SPTInAppMessageBannerMessageController : NSObject <SPTInAppMessageBannerMessagePriorityDeciderDelegate>
{
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    SPTInAppMessageBannerMessageParser *_bannerMessageParser;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    SPTInAppMessageBannerMessageViewModel *_bannerMessageViewModel;
    SPTInAppMessageBannerPresentationController *_bannerPresentationController;
}

@property(retain, nonatomic) SPTInAppMessageBannerPresentationController *bannerPresentationController; // @synthesize bannerPresentationController=_bannerPresentationController;
@property(retain, nonatomic) SPTInAppMessageBannerMessageViewModel *bannerMessageViewModel; // @synthesize bannerMessageViewModel=_bannerMessageViewModel;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) SPTInAppMessageBannerMessageParser *bannerMessageParser; // @synthesize bannerMessageParser=_bannerMessageParser;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
- (void).cxx_destruct;
- (void)bannerMessagePriorityDeciderDidFetchMessage:(id)arg1 forTrigger:(id)arg2;
- (id)initWithBannerPresentationManager:(id)arg1 bannerMessageParser:(id)arg2 actionFactory:(id)arg3 serviceLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

