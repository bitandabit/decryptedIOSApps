//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchEventAnnouncing-Protocol.h"
#import "SCSearchQueryCoordinating-Protocol.h"

@class NSString, SCSearchCachedRequestManager, SCSearchEventListenerAnnouncer, SCSearchNavigationCoordinator, SCSearchQuery, SCUserSession;

@interface SCSearchOperaMetaStoryQueryCoordinator : NSObject <SCSearchQueryCoordinating, SCSearchEventAnnouncing>
{
    SCUserSession *_userSession;
    SCSearchEventListenerAnnouncer *_eventAnnouncer;
    SCSearchCachedRequestManager *_cachedRequestManager;
    SCSearchQuery *_currentQuery;
    _Bool _isLoading;
    SCSearchNavigationCoordinator *_navigationCoordinator;
}

+ (id)announcerIdentifier;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (id)_sectionDescriptorsFromQuery:(id)arg1 response:(id)arg2;
- (void)_updateWithQuery:(id)arg1 response:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleResponse:(id)arg1 withQuery:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_fetchMetaStoryResponseWithQuery:(id)arg1 queryInfo:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_setLocalSectionWithQuery:(id)arg1 queryInfo:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_setChatSectionWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPerformQuery:(id)arg1;
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

