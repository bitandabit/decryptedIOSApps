//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SCCheetahStoriesActionHandler, SCCheetahStory;

@protocol SCCheetahStoriesActionHandlerDelegate <NSObject>
- (void)cheetahStoriesActionHandler:(SCCheetahStoriesActionHandler *)arg1 didChangeSubscribeState:(_Bool)arg2 forStory:(SCCheetahStory *)arg3;
- (unsigned long long)currentActiveTabForCheetahStoriesActionHandler:(SCCheetahStoriesActionHandler *)arg1;
- (void)cheetahStoriesActionHandler:(SCCheetahStoriesActionHandler *)arg1 willHideStory:(SCCheetahStory *)arg2;
- (void)cheetahStoriesActionHandlerDidDismissStory:(SCCheetahStoriesActionHandler *)arg1;
- (void)cheetahStoriesActionHandler:(SCCheetahStoriesActionHandler *)arg1 didBeginToDismissStoryWithIndexPath:(NSIndexPath *)arg2;
- (void)cheetahStoriesActionHandler:(SCCheetahStoriesActionHandler *)arg1 didStartToDisplayStoryWithIndexPath:(NSIndexPath *)arg2;
@end

