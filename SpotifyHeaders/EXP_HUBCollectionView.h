//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDelegate.h"

@class NSMutableSet, NSString;

@interface EXP_HUBCollectionView : UICollectionView <UICollectionViewDelegate>
{
    NSMutableSet *_registeredCollectionViewCellReuseIdentifiers;
    id <EXP_HUBScrollViewDelegate> _scrollViewDelegate;
    id <UICollectionViewDelegate> _collectionViewDelegate;
}

@property(nonatomic) __weak id <UICollectionViewDelegate> collectionViewDelegate; // @synthesize collectionViewDelegate=_collectionViewDelegate;
@property(nonatomic) __weak id <EXP_HUBScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 cellClassWhenUnregistered:(Class)arg3;
@property(readonly, nonatomic) NSMutableSet *registeredCollectionViewCellReuseIdentifiers; // @synthesize registeredCollectionViewCellReuseIdentifiers=_registeredCollectionViewCellReuseIdentifiers;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UICollectionViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

