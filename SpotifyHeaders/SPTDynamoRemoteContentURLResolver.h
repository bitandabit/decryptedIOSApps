//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubRemoteContentURLResolver.h"

@class NSString;

@interface SPTDynamoRemoteContentURLResolver : NSObject <SPTHubRemoteContentURLResolver>
{
}

+ (id)cdnURLFromViewURIComponents:(id)arg1;
+ (id)hubviewURLComponentsForIdentifier:(id)arg1;
+ (id)identifierFromViewURIComponents:(id)arg1;
- (id)remoteHubContentURLForEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (id)remoteHubContentURLForViewURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
