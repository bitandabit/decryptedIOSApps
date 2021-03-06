//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class FriendStories, NSString, SCOperaViewController, SCStoryManagementViewCoordinator;
@protocol SCOperaPlaylistItemController;

@interface SCStoryManagementOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCOperaPlaylistItemExtraPropertiesProvider>
{
    FriendStories *_friendStories;
    SCStoryManagementViewCoordinator *_storyManagementCoordinator;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCOperaViewController *_operaViewController;
}

- (void).cxx_destruct;
- (id)_generateStoryCellViewModels;
- (unsigned long long)_indexOfDataModel:(id)arg1;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateOperaConfiguration:(id)arg1;
- (id)extraPropertiesProvider;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isHighPriorityEventListener;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithFriendStories:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

