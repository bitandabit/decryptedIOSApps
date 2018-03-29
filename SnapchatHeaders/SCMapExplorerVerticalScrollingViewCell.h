//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCMapExploreRequiresUpdateView, SCMapExplorerCarouselItemView, SCMapExplorerStatus;
@protocol SCMapExplorerCarouselItemViewDelegate;

@interface SCMapExplorerVerticalScrollingViewCell : UICollectionViewCell
{
    SCMapExplorerCarouselItemView *_explorerCarouselItemView;
    SCMapExploreRequiresUpdateView *_requiresUpdateView;
    SCMapExplorerStatus *_status;
}

+ (double)heightForViewWithWidth:(double)arg1 status:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCMapExplorerCarouselItemViewDelegate> delegate;
@property(readonly, nonatomic) SCMapExplorerStatus *status;
- (void)setStatus:(id)arg1 viewed:(_Bool)arg2 userSession:(id)arg3;
- (void)layoutSubviews;

@end

