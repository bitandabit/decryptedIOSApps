//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownloadableContent.h"

@class NSString;

@interface SCLensDownloadableContent : SCDownloadableContent
{
    NSString *_resourcesTag;
    NSString *_resourcesChecksum;
}

- (void).cxx_destruct;
- (id)faceTrackingResourcesChecksum;
- (id)faceTrackingResourcesPath;
- (void)verifyTrackingData;
- (id)eventUniqueId;
- (id)resourceName;
- (id)fileNames;
- (id)directoryName;
- (id)initWithResourcesTag:(id)arg1 checksum:(id)arg2;

@end

