//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTHubLocalContentBuilder.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SPTHubInstrumentationData, SPTHubViewHeaderData;

@interface SPTHubContentBuilder : NSObject <SPTHubLocalContentBuilder>
{
    _Bool _remoteContentAdded;
    SPTHubViewHeaderData *_viewHeaderData;
    NSDictionary *_contentSetMetadata;
    SPTHubInstrumentationData *_instrumentationData;
    NSString *_extensionEndpointPath;
    NSMutableArray *_tabItems;
    unsigned long long _initiallySelectedTabItemIndex;
    NSMutableArray *_blocks;
    NSMutableDictionary *_blocksByIdentifiers;
}

@property(nonatomic) _Bool remoteContentAdded; // @synthesize remoteContentAdded=_remoteContentAdded;
@property(readonly, nonatomic) NSMutableDictionary *blocksByIdentifiers; // @synthesize blocksByIdentifiers=_blocksByIdentifiers;
@property(readonly, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(nonatomic) unsigned long long initiallySelectedTabItemIndex; // @synthesize initiallySelectedTabItemIndex=_initiallySelectedTabItemIndex;
@property(readonly, nonatomic) NSMutableArray *tabItems; // @synthesize tabItems=_tabItems;
@property(copy, nonatomic) NSString *extensionEndpointPath; // @synthesize extensionEndpointPath=_extensionEndpointPath;
@property(retain, nonatomic) SPTHubInstrumentationData *instrumentationData; // @synthesize instrumentationData=_instrumentationData;
@property(retain, nonatomic) NSDictionary *contentSetMetadata; // @synthesize contentSetMetadata=_contentSetMetadata;
@property(retain, nonatomic) SPTHubViewHeaderData *viewHeaderData; // @synthesize viewHeaderData=_viewHeaderData;
- (void).cxx_destruct;
- (void)removeBlockWithIdentifier:(id)arg1;
- (id)blockWithIdentifier:(id)arg1;
- (id)blockIdentifierForTabItemAtIndex:(unsigned long long)arg1;
- (void)addBlock:(id)arg1;
- (void)addRemoteBlockDictionaries:(id)arg1 usingPathSet:(id)arg2 initialDataset:(_Bool)arg3;
@property(readonly, nonatomic) _Bool containsContent;
- (void)reset;
- (id)buildContentSetForSelectedTabItemIndex:(id)arg1;
- (void)addRemoteBlockDictionaries:(id)arg1 usingPathSet:(id)arg2;
- (void)addRemoteContentData:(id)arg1 usingPathSet:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

