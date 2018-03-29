//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCTableIndex;

@interface SCTableIndexController : NSObject
{
    double _scrollViewOriginMinY;
    double _lastYOffset;
    double _lastRecordedYOffsetTime;
    double _lastTopOffset;
    double _lastBottomOffset;
    SCTableIndex *_tableIndexView;
}

@property(readonly, nonatomic) SCTableIndex *tableIndexView; // @synthesize tableIndexView=_tableIndexView;
- (void).cxx_destruct;
- (void)_updatescrollSpeedWithOffset:(double)arg1;
- (void)updateTableIndexWithHiddenFrame:(struct CGRect)arg1 padding:(double)arg2;
- (void)tableIndexDidEndScrolling;
- (struct CGPoint)scrollBarOriginRelativeToTableIndex;
- (void)updateTableIndexPositionWithParentScrollView:(id)arg1 topOffset:(double)arg2 animate:(_Bool)arg3;
- (void)updateTableIndexPositionWithParentScrollView:(id)arg1 topOffset:(double)arg2 bottomOffset:(double)arg3 animate:(_Bool)arg4;
- (void)setupTableIndexLayoutContraintsWithParentScrollView:(id)arg1 topOffset:(double)arg2;
- (void)setupTableIndexLayoutContraintsWithParentScrollView:(id)arg1 topOffset:(double)arg2 bottomOffset:(double)arg3;
- (id)initWithTableIndexConfiguration:(id)arg1;

@end

