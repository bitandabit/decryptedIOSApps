//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensAssetDownloadOperationV2.h"

@class SCLensBlobDataFetcher;

@interface SCLensUserGeneratedRemoteAssetDownloadOperationV2 : SCLensAssetDownloadOperationV2
{
    SCLensBlobDataFetcher *_blobDataFetcher;
}

@property(retain, nonatomic) SCLensBlobDataFetcher *blobDataFetcher; // @synthesize blobDataFetcher=_blobDataFetcher;
- (void).cxx_destruct;
- (void)boostWithSettings:(id)arg1;
- (void)executeWithSettings:(id)arg1;
- (id)initWithLens:(id)arg1 requestTiming:(long long)arg2 asset:(id)arg3 blobDataFetcher:(id)arg4;

@end

