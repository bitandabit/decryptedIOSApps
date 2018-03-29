//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface SCChatViewModelVerticalLayoutProperties : NSObject
{
    double _tableHeight;
    double _belowTheFoldOffset;
    double _previewOffset;
    NSIndexPath *_firstBelowTheFoldIndexPath;
}

@property(readonly, nonatomic) NSIndexPath *firstBelowTheFoldIndexPath; // @synthesize firstBelowTheFoldIndexPath=_firstBelowTheFoldIndexPath;
@property(readonly, nonatomic) double previewOffset; // @synthesize previewOffset=_previewOffset;
@property(readonly, nonatomic) double belowTheFoldOffset; // @synthesize belowTheFoldOffset=_belowTheFoldOffset;
@property(readonly, nonatomic) double tableHeight; // @synthesize tableHeight=_tableHeight;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTableHeight:(double)arg1 belowTheFoldOffset:(double)arg2 previewOffset:(double)arg3 firstBelowTheFoldIndexPath:(id)arg4;

@end
