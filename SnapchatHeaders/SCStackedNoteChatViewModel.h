//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedChatViewModel.h"

@class NSMutableArray, SCMessageChatViewModelProps;

@interface SCStackedNoteChatViewModel : SCStackedChatViewModel
{
    NSMutableArray *_stackedViewModels;
    SCMessageChatViewModelProps *_props;
}

- (void).cxx_destruct;
- (double)sideLength;
- (id)stackedViewModels;
- (void)addStackedViewModelFromMessage:(id)arg1;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (unsigned long long)maxItemCapacityForCollectionView;
- (struct UIEdgeInsets)insetsForCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 stackedCollectionCellActionDelegate:(id)arg3 parentVC:(id)arg4;
- (double)insetForCollectionViewCell;
- (id)collectionViewCellReuseIdentifier;
- (Class)collectionViewCellClass;
- (id)collectionViewCellDictionary;
- (double)bodyContentWidth;
- (double)payloadHeight;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;
- (id)initWithMessage:(id)arg1 metadata:(id)arg2 props:(id)arg3;

@end

