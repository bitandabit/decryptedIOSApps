//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBundlingOfferDataSource.h"

@class NSString;

@interface SPTBundlingOfferDiskDataSource : NSObject <SPTBundlingOfferDataSource>
{
    id <SPTLocalSettings> _diskStorage;
}

@property(retain, nonatomic) id <SPTLocalSettings> diskStorage; // @synthesize diskStorage=_diskStorage;
- (void).cxx_destruct;
- (void)clearStoredObject;
- (void)storeObject:(id)arg1;
- (_Bool)hasDataAvailable;
- (id)offerModel;
- (void)load:(CDUnknownBlockType)arg1;
- (id)initWithLocalSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
