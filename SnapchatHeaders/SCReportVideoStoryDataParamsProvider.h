//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCReportStoryDataParamsProvider-Protocol.h"

@class NSString, NSURL, UIImage;
@protocol SCPerforming;

@interface SCReportVideoStoryDataParamsProvider : NSObject <SCReportStoryDataParamsProvider>
{
    id <SCPerforming> _performer;
    NSURL *_videoURL;
    UIImage *_overlayImage;
    NSString *_storyId;
    NSString *_reportedUsername;
    unsigned long long _storySnapSource;
    _Bool _isCheetahStory;
}

- (void).cxx_destruct;
- (void)storyDataParamsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isCheetahStory;
- (id)lensIdentifier;
- (id)attachmentUrlString;
- (id)reportedUsername;
- (id)storySnapId;
- (id)initWithVideoURL:(id)arg1 overlayImage:(id)arg2 storyId:(id)arg3 reportedUsername:(id)arg4 storySnapSource:(unsigned long long)arg5 isCheetahStory:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

