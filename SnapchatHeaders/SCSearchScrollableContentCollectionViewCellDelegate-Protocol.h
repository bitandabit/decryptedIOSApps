//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SCSearchActionModel, SCSearchScrollableContentCollectionViewCell, UIView;

@protocol SCSearchScrollableContentCollectionViewCellDelegate <NSObject>
- (void)scrollableContentCollectionViewCellDidTapViewMore:(SCSearchScrollableContentCollectionViewCell *)arg1;
- (void)scrollableContentCollectionViewCell:(SCSearchScrollableContentCollectionViewCell *)arg1 didTriggerActionFromItemAtIndexPath:(NSIndexPath *)arg2 withActionModel:(SCSearchActionModel *)arg3 fromSourceView:(UIView *)arg4;
- (void)scrollableContentCollectionViewCell:(SCSearchScrollableContentCollectionViewCell *)arg1 didLongPressItemAtIndexPath:(NSIndexPath *)arg2;
- (void)scrollableContentCollectionViewCell:(SCSearchScrollableContentCollectionViewCell *)arg1 didTapItemAtIndexPath:(NSIndexPath *)arg2;
- (void)scrollableContentCollectionViewCell:(SCSearchScrollableContentCollectionViewCell *)arg1 willDisplayCellAtIndex:(unsigned long long)arg2;
- (struct CGRect)boundsOfParentScrollViewForCell:(SCSearchScrollableContentCollectionViewCell *)arg1;
- (struct CGRect)rectForCellInParentScrollView:(SCSearchScrollableContentCollectionViewCell *)arg1;
@end

