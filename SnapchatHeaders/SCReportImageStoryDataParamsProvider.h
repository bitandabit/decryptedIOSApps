//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCReportStoryDataParamsProvider-Protocol.h"

@class NSString, SCReportStoryDataParams;

@interface SCReportImageStoryDataParamsProvider : NSObject <SCReportStoryDataParamsProvider>
{
    SCReportStoryDataParams *_storyDataParams;
}

- (void).cxx_destruct;
- (void)storyDataParamsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCheetahStory;
- (id)lensIdentifier;
- (id)attachmentUrlString;
- (id)reportedUsername;
- (id)storySnapId;
- (id)initWithImage:(id)arg1 storyId:(id)arg2 reportedUsername:(id)arg3 storySnapSource:(unsigned long long)arg4 isCheetahStory:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
