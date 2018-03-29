//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCachingMediaExperimentContext : SCExperimentContext
{
    _Bool _onlySaveOriginalImages;
    _Bool _useTTLForCloudFS;
    _Bool _useTTLForImageCache;
}

@property(readonly, nonatomic) _Bool useTTLForImageCache; // @synthesize useTTLForImageCache=_useTTLForImageCache;
@property(readonly, nonatomic) _Bool useTTLForCloudFS; // @synthesize useTTLForCloudFS=_useTTLForCloudFS;
@property(readonly, nonatomic) _Bool onlySaveOriginalImages; // @synthesize onlySaveOriginalImages=_onlySaveOriginalImages;
- (void)setupParameters;
- (id)experimentName;

@end
