//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCheetahStoriesDiscoverFeedExperiment-Protocol.h"

@class SCCheetahStoriesActionHandler, SCCheetahStoriesQueryCoordinator, SCSearchQueryResultController, SCUserSession, UICollectionView;

@interface SCCheetahStoriesDiscoverFeedCarouselSubscribedOnly : NSObject <SCCheetahStoriesDiscoverFeedExperiment>
{
    SCUserSession *_userSession;
    SCCheetahStoriesActionHandler *_actionHandler;
    UICollectionView *_cheetahStoryCollectionView;
    SCCheetahStoriesQueryCoordinator *_queryCoordinator;
    SCSearchQueryResultController *_queryResultController;
}

@property(nonatomic) __weak SCSearchQueryResultController *queryResultController; // @synthesize queryResultController=_queryResultController;
@property(nonatomic) __weak SCCheetahStoriesQueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
@property(nonatomic) __weak UICollectionView *cheetahStoryCollectionView; // @synthesize cheetahStoryCollectionView=_cheetahStoryCollectionView;
@property(nonatomic) __weak SCCheetahStoriesActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)onCheetahStoryRequestBuilt:(id)arg1;
- (_Bool)onCheetahStoriesViewPullToRefresh;
- (void)onCheetahStoryCellPostRenderedWithCell:(id)arg1;
- (void)onCheetahStoryTappedForIndexPath:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithUserSession:(id)arg1;

@end

