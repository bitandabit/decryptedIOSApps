//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapExplorerCarouselItemViewDelegate-Protocol.h"
#import "SCMapPersonCarouselItemViewDelegate-Protocol.h"

@class NSArray, SCMapExplorerVerticalScrollingView;

@protocol SCMapExplorerVerticalScrollingViewDelegate <SCMapPersonCarouselItemViewDelegate, SCMapExplorerCarouselItemViewDelegate>
- (void)explorerVerticalScrollingView:(SCMapExplorerVerticalScrollingView *)arg1 wantsChatForPeople:(NSArray *)arg2;
@end

