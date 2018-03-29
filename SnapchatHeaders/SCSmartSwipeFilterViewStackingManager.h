//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, SCFilterView, SCPreviewFilterItem;

@interface SCSmartSwipeFilterViewStackingManager : NSObject
{
    NSMutableArray *_stackedOverlayFilters;
    NSMutableArray *_stackedOverlayFilterViews;
    SCPreviewFilterItem *_stackedMediaFilter;
    SCFilterView *_stackedMediaFilterView;
}

@property(readonly, nonatomic) SCFilterView *stackedMediaFilterView; // @synthesize stackedMediaFilterView=_stackedMediaFilterView;
@property(readonly, nonatomic) SCPreviewFilterItem *stackedMediaFilter; // @synthesize stackedMediaFilter=_stackedMediaFilter;
@property(readonly, nonatomic) NSMutableArray *stackedOverlayFilterViews; // @synthesize stackedOverlayFilterViews=_stackedOverlayFilterViews;
@property(readonly, nonatomic) NSMutableArray *stackedOverlayFilters; // @synthesize stackedOverlayFilters=_stackedOverlayFilters;
- (void).cxx_destruct;
- (id)stackedFiltersInfo;
- (id)stackedFilterItems;
- (id)stackedFilterNameForType:(long long)arg1;
- (void)clear;
- (void)_clearStackedMediaFilter;
- (long long)stackedFilterCount;
- (void)unstackFilterItem:(id)arg1 view:(id)arg2;
- (void)stackFilterItem:(id)arg1 view:(id)arg2;
- (id)init;

@end

