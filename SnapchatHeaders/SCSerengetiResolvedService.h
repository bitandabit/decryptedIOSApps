//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, SGTIStylizationIOS;

@interface SCSerengetiResolvedService : NSObject
{
    NSArray *_allowedURLRegexes;
    NSArray *_allowedFSNEndpointRegexes;
    NSString *_serviceId;
    NSURL *_remoteURL;
    SGTIStylizationIOS *_stylization;
    NSArray *_allowedURLs;
    NSArray *_allowedFSNEndpoints;
    double _cacheTTL;
    unsigned long long _forceReloadIfCachedBeforeTimeMs;
}

@property(readonly, nonatomic) unsigned long long forceReloadIfCachedBeforeTimeMs; // @synthesize forceReloadIfCachedBeforeTimeMs=_forceReloadIfCachedBeforeTimeMs;
@property(readonly, nonatomic) double cacheTTL; // @synthesize cacheTTL=_cacheTTL;
@property(readonly, nonatomic) NSArray *allowedFSNEndpoints; // @synthesize allowedFSNEndpoints=_allowedFSNEndpoints;
@property(readonly, nonatomic) NSArray *allowedURLs; // @synthesize allowedURLs=_allowedURLs;
@property(readonly, nonatomic) SGTIStylizationIOS *stylization; // @synthesize stylization=_stylization;
@property(readonly, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (_Bool)shouldAllowFSNEndpoint:(id)arg1;
- (_Bool)shouldAllowURLToPerformRequest:(id)arg1 urlInfo:(id *)arg2;
- (long long)_regexes:(id)arg1 indexOfRegexMatchingAgainstString:(id)arg2;
- (id)initWithServiceId:(id)arg1 remoteURL:(id)arg2 stylization:(id)arg3 allowedURLs:(id)arg4 allowedFSNEndpoints:(id)arg5 cacheTTL:(double)arg6 forceReloadIfCachedBeforeTimeMs:(unsigned long long)arg7;

@end

