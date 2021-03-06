//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeedTableViewCell.h"

#import "SCSearchCarouselContainerCollectionViewCellDelegate-Protocol.h"

@class NSString, SCCheetahQuickAddDataSource, SCSearchCarouselContainerCollectionViewCell, UIButton, UILabel;
@protocol SCFeedFriendsQuickAddCarouselDelegate;

@interface SCCheetahFeedFriendQuickAddCarouselTableViewCell : SCFeedTableViewCell <SCSearchCarouselContainerCollectionViewCellDelegate>
{
    UILabel *_quickAddLabel;
    UIButton *_hideButton;
    id <SCFeedFriendsQuickAddCarouselDelegate> _quickAddCarouselDelegate;
    SCSearchCarouselContainerCollectionViewCell *_quickAddCarousel;
    SCCheetahQuickAddDataSource *_dataSource;
}

@property(retain, nonatomic) SCCheetahQuickAddDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) SCSearchCarouselContainerCollectionViewCell *quickAddCarousel; // @synthesize quickAddCarousel=_quickAddCarousel;
@property(nonatomic) __weak id <SCFeedFriendsQuickAddCarouselDelegate> quickAddCarouselDelegate; // @synthesize quickAddCarouselDelegate=_quickAddCarouselDelegate;
- (void).cxx_destruct;
- (void)_didTapHideButton;
- (void)_buildQuickAddCarousel;
- (void)searchCarouselContainerCollectionViewCellScrollViewDidScroll;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 willDisplayAtIndexPath:(id)arg2 scrolled:(_Bool)arg3;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTriggerActionOnItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)setUserSession:(id)arg1;
- (void)willBeDisplayed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

