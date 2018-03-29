//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBJSONSchema.h"

@class HUBComponentDefaults;

@interface HUBJSONSchemaImplementation : NSObject <HUBJSONSchema>
{
    id <HUBViewModelJSONSchema> _viewModelSchema;
    id <HUBComponentModelJSONSchema> _componentModelSchema;
    id <HUBComponentImageDataJSONSchema> _componentImageDataSchema;
    id <HUBComponentTargetJSONSchema> _componentTargetSchema;
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
}

@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <HUBComponentTargetJSONSchema> componentTargetSchema; // @synthesize componentTargetSchema=_componentTargetSchema;
@property(readonly, nonatomic) id <HUBComponentImageDataJSONSchema> componentImageDataSchema; // @synthesize componentImageDataSchema=_componentImageDataSchema;
@property(readonly, nonatomic) id <HUBComponentModelJSONSchema> componentModelSchema; // @synthesize componentModelSchema=_componentModelSchema;
@property(readonly, nonatomic) id <HUBViewModelJSONSchema> viewModelSchema; // @synthesize viewModelSchema=_viewModelSchema;
- (void).cxx_destruct;
- (id)viewModelFromJSONDictionary:(id)arg1;
- (id)copy;
- (id)createNewPath;
- (id)initWithViewModelSchema:(id)arg1 componentModelSchema:(id)arg2 componentImageDataSchema:(id)arg3 componentTargetSchema:(id)arg4 componentDefaults:(id)arg5 iconImageResolver:(id)arg6;
- (id)initWithComponentDefaults:(id)arg1 iconImageResolver:(id)arg2;

@end

