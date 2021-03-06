//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchIntentHandler-Protocol.h"

@class NSArray, NSDictionary, NSString, SCSearchEventListenerAnnouncer, SCSearchMetaStoryTransitionController, SCSearchNavigationCoordinator, SCSearchSession;
@protocol SCSearchSnapDomoIntentHandlerDelegate;

@interface SCSearchSnapDomoIntentHandler : NSObject <SCSearchIntentHandler>
{
    SCSearchSession *_searchSession;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchMetaStoryTransitionController *_presentTransitionController;
    _Bool _intentInProgress;
    NSDictionary *_extraLoggingData;
    NSArray *_completedTestIds;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    id <SCSearchSnapDomoIntentHandlerDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCSearchSnapDomoIntentHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
- (void).cxx_destruct;
- (_Bool)handleIntent:(id)arg1 notification:(id)arg2;
- (_Bool)handleIntent:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

