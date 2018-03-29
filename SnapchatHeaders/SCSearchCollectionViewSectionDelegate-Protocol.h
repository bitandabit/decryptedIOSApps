//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSIndexSet, NSString, UICollectionViewCell, UIViewController;
@protocol SCSearchCollectionViewSection;

@protocol SCSearchCollectionViewSectionDelegate <NSObject>
- (UIViewController *)presentingViewControllerForCollectionViewSection:(id <SCSearchCollectionViewSection>)arg1;
- (void)collectionViewSection:(id <SCSearchCollectionViewSection>)arg1 scrollToItemAtIndexInSection:(unsigned long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (struct UIEdgeInsets)sectionInsetsForCollectionViewSection:(id <SCSearchCollectionViewSection>)arg1;
- (struct CGSize)collectionViewBoundsSizeForSearchResultSection:(id <SCSearchCollectionViewSection>)arg1;
- (UICollectionViewCell *)searchResultSection:(id <SCSearchCollectionViewSection>)arg1 cellForItemAtIndexInSection:(unsigned long long)arg2;
- (NSIndexPath *)searchResultSection:(id <SCSearchCollectionViewSection>)arg1 indexPathForCell:(UICollectionViewCell *)arg2;
- (UICollectionViewCell *)searchResultSection:(id <SCSearchCollectionViewSection>)arg1 dequeueReusableCellWithReuseIdentifier:(NSString *)arg2 forIndexInSection:(unsigned long long)arg3;
- (void)searchResultSection:(id <SCSearchCollectionViewSection>)arg1 didUpdateLayoutWithInteraction:(_Bool)arg2;
- (void)searchResultSection:(id <SCSearchCollectionViewSection>)arg1 reloadCellsAtIndexesIfNeeded:(NSIndexSet *)arg2;
- (void)searchResultSectionUpdateIfNeeded:(id <SCSearchCollectionViewSection>)arg1;
@end
