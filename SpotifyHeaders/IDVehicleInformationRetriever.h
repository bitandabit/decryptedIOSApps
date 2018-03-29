//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEtchSession, IDVehicleInfo, IDVersionInfo, NSDictionary, NSOperationQueue;

@interface IDVehicleInformationRetriever : NSObject
{
    id <IDVehicleInformationRetrieverDelegate> _delegate;
    NSDictionary *_customSystemInfoSettings;
    NSDictionary *_connectionInfo;
    IDVehicleInfo *_vehicleInfo;
    IDVersionInfo *_cdsVersionInfo;
    IDVersionInfo *_etchVersionInfo;
    IDEtchSession *_etchSession;
    NSOperationQueue *_retrievalQueue;
    double _waitTimeBeforeRetrieval;
}

@property double waitTimeBeforeRetrieval; // @synthesize waitTimeBeforeRetrieval=_waitTimeBeforeRetrieval;
@property(readonly) NSOperationQueue *retrievalQueue; // @synthesize retrievalQueue=_retrievalQueue;
@property(retain) IDEtchSession *etchSession; // @synthesize etchSession=_etchSession;
@property(retain) IDVersionInfo *etchVersionInfo; // @synthesize etchVersionInfo=_etchVersionInfo;
@property(retain) IDVersionInfo *cdsVersionInfo; // @synthesize cdsVersionInfo=_cdsVersionInfo;
@property(retain) IDVehicleInfo *vehicleInfo; // @synthesize vehicleInfo=_vehicleInfo;
@property(readonly, copy) NSDictionary *connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property(readonly, copy) NSDictionary *customSystemInfoSettings; // @synthesize customSystemInfoSettings=_customSystemInfoSettings;
@property(readonly) __weak id <IDVehicleInformationRetrieverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (id)fetchEtchVersion:(id *)arg1;
- (id)fetchCdsVersion:(id *)arg1;
- (id)mergeSystemInfoDictWithCustomSettings:(id)arg1 customSystemInfoSettings:(id)arg2;
- (id)fetchSystemInfoDict:(id *)arg1;
- (void)disconnectFromHmi;
- (_Bool)connectToHmi:(id *)arg1;
- (void)retrieveVehicleProperties;
- (id)initWithDelegate:(id)arg1 connectionInfo:(id)arg2 customSystemInfoSettings:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

