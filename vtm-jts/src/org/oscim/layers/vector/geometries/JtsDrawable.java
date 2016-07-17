package org.oscim.layers.vector.geometries;

import com.vividsolutions.jts.geom.Geometry;
import com.vividsolutions.jts.geom.GeometryFactory;
import com.vividsolutions.jts.geom.impl.PackedCoordinateSequenceFactory;

import org.oscim.core.GeoPoint;
import org.oscim.utils.geom.GeomBuilder;

import java.util.List;

public class JtsDrawable implements Drawable {

    public static final PackedCoordinateSequenceFactory coordFactory;
    public static final GeometryFactory geomFactory;

    static {
        coordFactory = new PackedCoordinateSequenceFactory();
        geomFactory = new GeometryFactory(coordFactory);
    }

    protected Style style;
    protected Geometry geometry;

    public JtsDrawable(Style style) {
        this.style = style;
    }

    public JtsDrawable(Geometry geometry, Style style) {
        this.geometry = geometry;
        this.style = style;
    }

    /**
     * @param style
     */
    public void setStyle(Style style) {
        this.style = style;
    }

    /* (non-Javadoc)
     *
     * @see org.oscim.core.geometries.Drawable#getStyle() */
    @Override
    public Style getStyle() {
        return style;
    }

    /* (non-Javadoc)
     *
     * @see org.oscim.core.geometries.Drawable#getGeometry() */
    @Override
    public Geometry getGeometry() {
        return geometry;
    }

    protected static GeomBuilder loadPoints(GeomBuilder gb, List<GeoPoint> points) {
        for (GeoPoint point : points) {
            gb.point(point.getLongitude(),
                    point.getLatitude());
        }
        return gb;
    }

}