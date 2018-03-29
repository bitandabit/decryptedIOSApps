//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewTransitionLayout.h>

@class NSMutableDictionary, NSSet, SCCheetahTabBasedStoriesCollectionViewLayout;

@interface SCCheetahDiscoverFeedCollectionViewTransitionLayout : UICollectionViewTransitionLayout
{
    NSSet *_currentIndexPathsInVisibleRectSet;
    NSSet *_nextIndexPathsInVisibleRectSet;
    NSMutableDictionary *_mutableLayoutAttributesByIndexPath;
    SCCheetahTabBasedStoriesCollectionViewLayout *_currentDiscoverFeedLayout;
    SCCheetahTabBasedStoriesCollectionViewLayout *_nextDiscoverFeedLayout;
    long long _transitionDirection;
}

@property(nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
- (void).cxx_destruct;
- (void)_updateLayoutAttributes;
- (void)_buildIndexPathsInRectIfNeeded;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;

@end
