//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaMetaStoryViewControllerProviding-Protocol.h"
#import "SCSearchEventListener-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCSearchEventListenerAnnouncer, SCSearchMetaStoryTransitionController, SCUserSession;

@interface SCSearchOperaMetaStoryViewControllerProvider : NSObject <SCSearchEventListener, UIViewControllerTransitioningDelegate, SCOperaMetaStoryViewControllerProviding>
{
    SCUserSession *_userSession;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchMetaStoryTransitionController *_presentTransitionController;
    SCSearchMetaStoryTransitionController *_dismissTransitionController;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactivePresentingTransitionControllerForOperaLayerViewController:(id)arg1;
- (id)metaStoryViewControllerWithOperaLayerViewController:(id)arg1 initialSearchQuery:(id)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

