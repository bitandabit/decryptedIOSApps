//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationContentRequestOptions.h"

@class NSString;

@interface SPTExternalIntegrationContentRequestOptionsModel : NSObject <SPTExternalIntegrationContentRequestOptions>
{
    unsigned long long _limit;
}

@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
