//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCServerConfigListener-Protocol.h"

@class NSString, SCAPIClient, SOJUCdnCdnClientConfig;

@interface SCCDNSelectionManager : NSObject <SCServerConfigListener>
{
    SCAPIClient *_httpClient;
    NSString *_cachedCDNClientConfigurationString;
    SOJUCdnCdnClientConfig *_cdnClientConfig;
}

+ (id)shared;
@property(retain) SOJUCdnCdnClientConfig *cdnClientConfig; // @synthesize cdnClientConfig=_cdnClientConfig;
@property(retain) NSString *cachedCDNClientConfigurationString; // @synthesize cachedCDNClientConfigurationString=_cachedCDNClientConfigurationString;
@property(retain, nonatomic) SCAPIClient *httpClient; // @synthesize httpClient=_httpClient;
- (void).cxx_destruct;
- (void)serverConfigDidChange:(id)arg1;
- (id)_getDestinationHostForCdnId:(id)arg1 cdnInfos:(id)arg2;
- (id)_getDestinationHostWithReachability:(long long)arg1 routingRules:(id)arg2 cdnInfos:(id)arg3;
- (long long)_cdnRoutingRuleReachability;
- (void)_updateConfiguration:(id)arg1;
- (id)updateHostnameForUrl:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
