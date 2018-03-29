//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchUpdateListener-Protocol.h"

@class NSMutableDictionary, NSString, SCQueuePerformer, SCUserSession;
@protocol OS_dispatch_queue;

@interface SCCheetahStoriesViewModelStorage : NSObject <SCSearchUpdateListener>
{
    SCUserSession *_userSession;
    NSMutableDictionary *_cheetahStoriesViewModelStorage;
    NSObject<OS_dispatch_queue> *_updateQueue;
    SCQueuePerformer *_performer;
    _Bool _shouldEnableVideoThumbnail;
}

- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_appendStories:(id)arg1;
- (void)_reloadStories:(id)arg1;
- (id)viewModelsForStories:(id)arg1;
- (id)viewModelForStory:(id)arg1;
- (void)reloadWithStories:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

