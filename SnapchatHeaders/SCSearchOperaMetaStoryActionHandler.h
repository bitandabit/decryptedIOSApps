//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchActionHandling-Protocol.h"
#import "SCSearchEventAnnouncing-Protocol.h"

@class NSString, SCSearchAttachmentsActionHandler, SCSearchDynamicStoryActionHandler, SCSearchEventListenerAnnouncer, SCSearchNavigationCoordinator, UIViewController;

@interface SCSearchOperaMetaStoryActionHandler : NSObject <SCSearchActionHandling, SCSearchEventAnnouncing>
{
    SCSearchAttachmentsActionHandler *_webViewActionHandler;
    SCSearchDynamicStoryActionHandler *_dynamicStoryActionHandler;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    UIViewController *_presentingViewController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSearchSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
