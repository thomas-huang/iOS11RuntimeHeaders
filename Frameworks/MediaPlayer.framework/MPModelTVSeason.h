/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelTVSeason : MPModelObject {
    id /* block */  _artworkCatalogBlock;
    NSString * _descriptionText;
    long long  _episodesCount;
    bool  _hasCleanContent;
    bool  _hasExplicitContent;
    bool  _libraryAddEligible;
    bool  _libraryAdded;
    NSDate * _libraryAddedDate;
    long long  _number;
    MPModelTVEpisode * _representativeEpisode;
    MPModelTVShow * _show;
    long long  _sortType;
    long long  _year;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) long long episodesCount;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long number;
@property (nonatomic, retain) MPModelTVEpisode *representativeEpisode;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic) long long sortType;
@property (nonatomic) long long year;

+ (id)__MPModelPropertyTVSeasonArtwork__PROPERTY;
+ (id)__MPModelPropertyTVSeasonDescriptionText__PROPERTY;
+ (id)__MPModelPropertyTVSeasonEpisodesCount__PROPERTY;
+ (id)__MPModelPropertyTVSeasonHasCleanContent__PROPERTY;
+ (id)__MPModelPropertyTVSeasonHasExplicitContent__PROPERTY;
+ (id)__MPModelPropertyTVSeasonLibraryAddEligible__PROPERTY;
+ (id)__MPModelPropertyTVSeasonLibraryAddedDate__PROPERTY;
+ (id)__MPModelPropertyTVSeasonLibraryAdded__PROPERTY;
+ (id)__MPModelPropertyTVSeasonNumber__PROPERTY;
+ (id)__MPModelPropertyTVSeasonSortType__PROPERTY;
+ (id)__MPModelPropertyTVSeasonYear__PROPERTY;
+ (id)__MPModelRelationshipTVSeasonRepresentativeEpisode__PROPERTY;
+ (id)__MPModelRelationshipTVSeasonShow__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__descriptionText__KEY;
+ (id)__episodesCount__KEY;
+ (id)__hasCleanContent__KEY;
+ (id)__hasExplicitContent__KEY;
+ (id)__libraryAddEligible__KEY;
+ (id)__libraryAddedDate__KEY;
+ (id)__libraryAdded__KEY;
+ (id)__number__KEY;
+ (id)__representativeEpisode__KEY;
+ (id)__show__KEY;
+ (id)__sortType__KEY;
+ (id)__year__KEY;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (bool)supportsLibraryAddStatusObservation;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id /* block */)artworkCatalogBlock;
- (id)descriptionText;
- (long long)episodesCount;
- (bool)hasCleanContent;
- (bool)hasExplicitContent;
- (bool)isLibraryAddEligible;
- (bool)isLibraryAdded;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (id)libraryAddedDate;
- (long long)number;
- (id)representativeEpisode;
- (void)setArtworkCatalogBlock:(id /* block */)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setEpisodesCount:(long long)arg1;
- (void)setHasCleanContent:(bool)arg1;
- (void)setHasExplicitContent:(bool)arg1;
- (void)setLibraryAddEligible:(bool)arg1;
- (void)setLibraryAdded:(bool)arg1;
- (void)setLibraryAddedDate:(id)arg1;
- (void)setNumber:(long long)arg1;
- (void)setRepresentativeEpisode:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setSortType:(long long)arg1;
- (void)setYear:(long long)arg1;
- (id)show;
- (long long)sortType;
- (long long)year;

@end
