//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTInstrumentationMapper.h"

@class NSMapTable, NSString;

@interface SPTInstrumentationMapperImplementation : NSObject <SPTInstrumentationMapper>
{
    NSMapTable *_classMappingMap;
    NSMapTable *_instanceMappingMap;
}

@property(retain, nonatomic) NSMapTable *instanceMappingMap; // @synthesize instanceMappingMap=_instanceMappingMap;
@property(retain, nonatomic) NSMapTable *classMappingMap; // @synthesize classMappingMap=_classMappingMap;
- (void).cxx_destruct;
- (id)keyForInformation:(id)arg1;
- (id)executeMappingForView:(id)arg1;
- (void)setMappingBlock:(CDUnknownBlockType)arg1 forView:(id)arg2;
- (void)setMappingBlock:(CDUnknownBlockType)arg1 forClass:(Class)arg2;
- (void)setKey:(id)arg1 forView:(id)arg2;
- (void)setKey:(id)arg1 forClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

