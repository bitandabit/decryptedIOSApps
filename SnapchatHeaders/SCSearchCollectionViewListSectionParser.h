//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchQueryResultSectionParsing-Protocol.h"

@class NSString;

@interface SCSearchCollectionViewListSectionParser : NSObject <SCSearchQueryResultSectionParsing>
{
    _Bool _enableStreaming;
}

- (id)descriptorFromSectionResponse:(id)arg1 withSearchQuery:(id)arg2 originQueryForResponse:(id)arg3 searchRequestType:(long long)arg4;
- (id)initWithVideoStreamingEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

