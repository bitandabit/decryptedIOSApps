//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary;

@protocol EXP_HUBJSONSchema
@property(readonly, nonatomic, getter=isUsingAutomaticHubs2Mapping) _Bool usingAutomaticHubs2Mapping;
@property(readonly, nonatomic) id <EXP_HUBCommandModelJSONSchema> commandModelSchema;
@property(readonly, nonatomic) id <EXP_HUBComponentTargetJSONSchema> componentTargetSchema;
@property(readonly, nonatomic) id <EXP_HUBComponentImageDataJSONSchema> componentImageDataSchema;
@property(readonly, nonatomic) id <EXP_HUBComponentModelJSONSchema> componentModelSchema;
@property(readonly, nonatomic) id <EXP_HUBViewModelJSONSchema> viewModelSchema;
- (id <EXP_HUBViewModelBuilder>)builder;
- (id <EXP_HUBViewModel>)viewModelFromJSONDictionary:(NSDictionary *)arg1;
- (id <EXP_HUBJSONSchema>)copy;
- (id <EXP_HUBMutableJSONPath>)createNewPath;
@end

