//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SCPreviewFilterItem, SCSmartCarouselFilterArranger;

@protocol SCSmartCarouselFilterArrangerDelegate <NSObject>
- (void)filterArrangerDidReloadSwipeOrder:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArrangerWillReloadSwipeOrder:(SCSmartCarouselFilterArranger *)arg1;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didRemoveFilter:(SCPreviewFilterItem *)arg2 atIndex:(long long)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didInsertFilterAtIndex:(long long)arg2 filterItem:(SCPreviewFilterItem *)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(SCSmartCarouselFilterArranger *)arg1 didUpdateFilterName:(NSString *)arg2 config:(NSDictionary *)arg3;
@end
