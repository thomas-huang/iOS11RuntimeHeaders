/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDClusterGeocodingParameters : PBCodable <NSCopying> {
    NSMutableArray * _assetLocations;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *assetLocations;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)assetLocationType;

- (void).cxx_destruct;
- (void)addAssetLocation:(id)arg1;
- (id)assetLocationAtIndex:(unsigned long long)arg1;
- (id)assetLocations;
- (unsigned long long)assetLocationsCount;
- (void)clearAssetLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssetLocations:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
