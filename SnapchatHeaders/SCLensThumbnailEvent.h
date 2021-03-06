//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, SCLogger;

@interface SCLensThumbnailEvent : NSObject
{
    SCLogger *_logger;
    NSString *_lensSessionId;
    NSMutableDictionary *_thumbnailEventEntities;
    NSMutableDictionary *_lensIconOnScreenStartTime;
    NSMutableDictionary *_lensIconDownloadingStartTime;
}

- (void).cxx_destruct;
- (id)_eventDescription;
- (void)fireWithActiveLensOrder:(id)arg1;
- (void)finishDisplayingLensId:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)startDisplayingLensId:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)finishThumbnailLoadingForLensId:(id)arg1 adIndex:(unsigned long long)arg2;
- (void)startThumbnailLoadingForLensId:(id)arg1 adIndex:(unsigned long long)arg2;
- (id)initWithLensSessionId:(id)arg1 logger:(id)arg2;

@end

